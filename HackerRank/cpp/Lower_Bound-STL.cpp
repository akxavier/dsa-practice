#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> V;
    int n, q, item;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> item;
        V.push_back(item);
    }  
    
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> item;
        auto pos = lower_bound(V.begin(), V.end(), item);
        
        if(V[pos - V.begin()] == item)
            cout << "Yes" << " ";
        else
            cout << "No" << " ";
        
        cout << (pos - V.begin() + 1) << endl;
    }
    return 0;
}

