#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> cutTheSticks(vector<int> vect) {
    int discard = *min_element(vect.begin(), vect.end());
    int n = vect.size();
    for(auto it = vect.begin(); it != vect.end(); it++) {
        if(*it == discard) {
            vect.erase(it);
            it--;
        }
    }
    for(int &x : vect) 
        x -= discard;
        
    return vect;       
}

int main() {
    int n, len;
    cin >> n;
    vector<int> vect;
    for(int i = 0; i < n; i++) {
        cin >> len;
        vect.push_back(len);
    }
    
    while(!vect.empty()) {
        cout << vect.size() << endl;
        vect = cutTheSticks(vect);
    }
}
