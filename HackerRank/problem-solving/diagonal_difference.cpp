#include<iostream>
#include<vector>

using namespace std;

int diagonalDifference(vector<vector<int>> vect) {
    int n = vect.size();
    int lsum = 0, rsum = 0;
    
    for(int i = 0; i < n; i++) 
        lsum += vect[i][i];
        
    for(int i = 0; i < n; i++)
        rsum += vect[i][n - 1 -i ];
        
    int diff = (lsum > rsum) ? (lsum - rsum) : (rsum - lsum);
    return diff;
}

int main() {
    int n, elem;
    cin >> n;
    
    vector<vector<int>> vect;
    
    for(int i = 0; i < n; i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            cin >> elem;
            temp.push_back(elem);
        }
        vect.push_back(temp);
    }
    
    int ddiff = diagonalDifference(vect);
    
    cout << ddiff;
}
