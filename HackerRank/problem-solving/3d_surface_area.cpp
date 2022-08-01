#include<bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n;
    vector<vector<int>> v;
    
    cin >> h >> w;
    
    for(int i = 0; i < h; i++) {
        vector<int> temp;
        for(int j = 0; j < w; j++) {
            cin >> n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }
    
    int sum;
    // add bases and tops
    sum = 2 * h * w;
    
    // add sides
    for(int i = 0; i < h; i++) {
        int max = v[i][0];
        for(int j = 1; j < w; j++) {
            int curr = v[i][j];
            if(curr > max)
                max = curr;
                
            if(j != w - 1) {
                int prev = v[i][j - 1];
                int next = v[i][j + 1];
                if(curr < prev && curr < next) {
                    int diff = (prev < next) ? (prev - curr) : (next - curr);
                    sum += 2 * diff;
                }
            }
        }
        
        sum += 2 * max;
    }
    
    for(int j = 0; j < w; j++) {
        int max = v[0][j];
        for(int i = 1; i < h; i++) {
            int curr = v[i][j];
            if(curr > max)
                max = curr;
                
            if(i != h - 1) {
                int prev = v[i - 1][j];
                int next = v[i + 1][j];
                if(curr < prev && curr < next) {
                    int diff = (prev < next) ? (prev - curr) : (next - curr);
                    sum += 2 * diff;
                }
            }
        }
        
        sum += 2 * max;
    }
        
    cout << sum;
}
