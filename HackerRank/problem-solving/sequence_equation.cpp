#include<iostream>
#include<vector>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> res, rev;
    int n = p.size() - 1;
    res.resize(n + 1);
    rev.resize(n + 1);
    res.push_back(0);
    rev[0] = 0;
    
    for(int i = 1; i <= n; i++) {
        int py = p[i];
        rev[py] = i;
    }
    
    for(int i = 1; i <= n; i++) {
        int qx = rev[i];
        int qqx = rev[qx];
        res[i] = qqx;
    }
    
    return res;
}

int main() {
    int n, elem;
    vector<int> p;
    cin >> n;
    p.push_back(0);
    for(int i = 1; i <= n; i++) {
        cin >> elem;
        p.push_back(elem);
    }
    vector<int> result = permutationEquation(p);
    for(int i = 1; i <= n; i++)
        cout << result[i] << endl;
}
