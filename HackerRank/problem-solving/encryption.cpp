#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

string encryption(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int l = s.size();
    int m = sqrt(l);
    int r, c;
    
    if(m * m == l) 
        r = c = m;
    else if(m * (m + 1) >= l) {
        r = m;
        c = m + 1;
    }
    else 
        r = c = m + 1;
     
    vector<string> grid;   
    for(int i = 0; i < l; i += c) {
        string word(s, i, c);
        grid.push_back(word);
    }
        
    string result;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            if((j == r - 1) && (i >= grid[j].size()))
                break;
            result.push_back(grid[j][i]);
        }
        result.push_back(' ');
    }
    result.pop_back();
        
    return result;
}

int main() {
    string str;
    getline(cin, str);
    cout << encryption(str);
}

