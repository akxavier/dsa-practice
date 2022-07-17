#include<bits/stdc++.h>
using namespace std;

string fairRations(vector<int> v) {
    int count = 0;
    int n = v.size();
    
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 0)
            continue;
            
        if(i == n - 1)
            return "NO";
            
        v[i]++;
        v[i + 1]++;
        count += 2;
    }
    
    return to_string(count);
}

int main() {
    int n, loaf;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> loaf;
        v.push_back(loaf);
    }
    
    cout << fairRations(v);
}
