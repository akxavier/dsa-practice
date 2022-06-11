#include<iostream>
#include<vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> V;
    
    int n, q, m, item;
    cin >> n >> q;
    
    for(int i = 0; i < n; i++) {
        cin >> m;
        vector<int> iV;
        
        for(int j = 0; j < m; j++) {
            cin >> item;
            iV.push_back(item);
        }
        V.push_back(iV);
    } 
    
    int x, y;
    
    for(int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << V[x][y] << endl;
    } 
    return 0;
}
