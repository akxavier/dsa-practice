#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int> m;
    int q, mark, query;
    char name[6];
    cin >> q; 
    for(int i = 0; i < q; i++) {
        cin >> query;
        switch(query) {
            case 1: cin >> name >> mark;
                if(m.find(name) == m.end())
                    m.insert(make_pair(name, mark));
                else 
                    m[name] += mark;
                break;
            case 2: cin >> name;
                m.erase(name);
                break;
            case 3: cin >> name;
                cout << m[name] << endl;
                break;
        }
    }
    return 0;
}




