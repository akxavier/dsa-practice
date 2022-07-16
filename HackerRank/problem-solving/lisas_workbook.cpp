#include<bits/stdc++.h>
using namespace std;

int workbook(int n, int k, vector<int> v) {
    int page = 1;
    int chap;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        chap = i;
        int problems = v[i];
        int start = 1, end;
        
        while(problems > 0) {
            if(problems / k == 0) {
                end = start + problems - 1;
                problems = 0;
            }
            else {
                end = start + k - 1;
                problems -= k;
            }
            
            if((page >= start) && (page <= end))
                count++;
            page++;
            start += k;
        }
    }
    
    return count;
}

int main() {
    int n, k, elem;
    vector<int> v;
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        v.push_back(elem);
    }
    
    cout << workbook(n, k, v);
}

