#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void serviceLane(vector<int> width, vector<vector<int>> cases) {
    int t = cases.size(), x, y;
    for(int i = 0; i < t; i++) {
        x = cases[i][0];
        y = cases[i][1];
        
        cout << *min_element(width.begin() + x, width.begin() + y + 1) << endl;
    }
}

int main() {
    int n, t, elem, i, j;
    vector<int> width;
    vector<vector<int>> cases;
    
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        width.push_back(elem);
    }
    
    for(int k = 0; k < t; k++) {
        cin >> i >> j;
        vector<int> v = {i, j};
        cases.push_back(v);
    }
    
    serviceLane(width, cases);
}
