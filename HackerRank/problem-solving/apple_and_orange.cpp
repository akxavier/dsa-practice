#include<iostream>
#include<vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    for(int &x : apples) {
        x += a;
    }
    for(int &x : oranges) {
        x += b;
    }
    
    int atop = 0, otop = 0;
    
    for(int &x : apples) {
        if((x >= s) && (x <= t))
            atop++;
    }
    
    for(int &x : oranges) {
        if((x >= s) && (x <= t))
            otop++;
    }
    
    cout << atop << endl << otop;
}

int main() {
    int s, t, a, b, m, n, elem;
    vector<int> apples, oranges;
    
    cin >> s >> t >> a >> b >> m >> n;
    for(int i = 0; i < m; i++) {
        cin >> elem;
        apples.push_back(elem);
    }
    
    for(int i = 0; i < n; i++) {
        cin >> elem;
        oranges.push_back(elem);
    }
    
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}
