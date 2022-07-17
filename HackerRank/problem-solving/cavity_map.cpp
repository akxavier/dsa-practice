#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    
    for(int i = 1; i < n - 1; i++) {
        for(int j = 1; j < n - 1; j++) {
            int maxi = max({grid[i - 1][j], grid[i][j - 1], grid[i + 1][j], grid[i][j + 1]});
            if(maxi < grid[i][j])
                grid[i][j] = 'X';
        }
    }
    
    return grid;
}

int main() {
    int n;
    vector<string> grid;
    
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        grid.push_back(str);
    }
    
    grid = cavityMap(grid);
    for(string &x : grid) 
        cout << x << endl;
}
