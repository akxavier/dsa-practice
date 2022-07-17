#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());
    int max = c[0];
    int distance;
    int m = c.size();
    
    for(int i = 1; i < m; i++) {
        distance = c[i] - c[i - 1];
        if((distance / 2) > max) {
            max = distance / 2;
        }
    }
    
    if(((n - 1) - c[m - 1]) > max) {
        max = (n - 1) - c[m - 1];
    }
        
    return max;
}

int main() {
    int n, m, index;
    vector<int> c;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> index;
        c.push_back(index);
    }
    
    cout << flatlandSpaceStations(n, c);
}
