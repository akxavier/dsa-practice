#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string organizingCharacters(vector<vector<long>> vect) {
    vector<long> container, type;
    int n = vect.size();
    container.resize(n);
    type.resize(n);
    for(int i = 0; i < n; i++) {
        int containerCount = 0, typeCount = 0;
        for(int j = 0; j < n; j++) {
            containerCount += vect[i][j];
            typeCount += vect[j][i];
        }
        container[i] = containerCount;
        type[i] = typeCount;
    }
    
    sort(container.begin(), container.end());
    sort(type.begin(), type.end());
    
    int flag = 1;
    for(int i = 0; i < n; i++) {
        if(container[i] != type[i]) {
            flag = 0;
            break;
        }
    }
    
    if(flag)
        return "Possible";
    else
        return "Impossible";
}

int main() {
    long q, n, elem;
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> n;
        vector<vector<long>> vect;
        
        for(int j = 0; j < n; j++) {
            vector<long> v;
            for(int k = 0; k < n; k++) {
                cin >> elem;
                v.push_back(elem);
            }
            vect.push_back(v);
        }
        
        cout << organizingCharacters(vect) << endl;
    }
}

