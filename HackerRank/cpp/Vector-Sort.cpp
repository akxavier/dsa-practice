#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> V;
    int n, item;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> item;
        V.push_back(item);
    }
    
    sort(V.begin(), V.end());
    
    for(auto i = V.begin(); i != V.end(); i++) 
        cout << *i << " ";
        
    return 0;
}

