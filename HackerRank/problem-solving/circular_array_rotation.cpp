#include<iostream>
#include<vector>
#include<valarray>
using namespace std;

void circularArrayRotation(valarray<int> varr, int k, vector<int> vect) {
    int n = varr.size();
    int rot = k % n;
    varr = varr.cshift(-rot);
    for(int &x : vect)
        cout << varr[x] << endl;
}

int main() {
    int n, k, q, elem;
    cin >> n >> k >> q;
    valarray<int> varr;
    vector<int> vect;
    
    varr.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> varr[i];
    }
    
    for(int i = 0; i < q; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    circularArrayRotation(varr, k, vect);
}
