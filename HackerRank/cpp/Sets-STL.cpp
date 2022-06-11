#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> S;
    int q, y, x;
    
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> y >> x;
        switch(y) {
            case 1: S.insert(x);
                break;
            case 2: S.erase(x);
                break;
            case 3: if(S.find(x) == S.end())
                        cout << "No" << endl;
                    else
                        cout << "Yes" << endl;
                break;
        }
    }  
    return 0;
}




