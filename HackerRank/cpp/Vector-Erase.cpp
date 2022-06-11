#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> V;
    int n, item, x, a, b;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> item;
        V.push_back(item);
    }
    
    cin >> x;
    V.erase(V.begin() + x - 1);
    
    cin >> a >> b;
    V.erase(V.begin() + a - 1, V.begin() + b - 1);
    
    cout << V.size() << endl;
    for(auto i = V.begin(); i != V.end(); i++)
        cout << *i << " ";
    return 0;
}

