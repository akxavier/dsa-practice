#include<bits/stdc++.h>
using namespace std;

vector<int> stones(int n, int a, int b) {
    vector<int> v;
    
    for(int i = 0; i < n; i++) {
        int poss = (i * a) + ((n - 1 - i) * b);
        v.push_back(poss);
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
}

int main() {
    int t, n, a, b;
    cin >> t;
    
    vector<int> result;
    
    for(int i = 0; i < t; i++) {
        cin >> n >> a >> b;
        result = stones(n, a, b);
        
        for(int &x : result)
            cout << x << " ";
        cout << endl;
    }
}
