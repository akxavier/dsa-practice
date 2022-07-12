#include<iostream>
#include<vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int i = 0, e = 100;
    int n = c.size();
    do {
        i = (i + k) % n;
        e--;
        if(c[i] == 1)
            e -= 2;
    } while(i != 0);
    
    return e;
}

int main() {
    int n, k, elem;
    vector<int> c;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        c.push_back(elem);
    }
    
    cout << jumpingOnClouds(c, k);
}
