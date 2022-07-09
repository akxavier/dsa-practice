#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

void plusMinus(vector<int> v) {
    float n = v.size();
    int pcount = 0, ncount = 0, zcount = 0;
    
    for(auto it = v.begin(); it != v.end(); it++) {
        if(*it > 0)
            pcount++;
        else if(*it < 0)
            ncount++;
        else if(*it == 0)
            zcount++;
    }
        
    float pratio = pcount/n;
    float nratio = ncount/n;
    float zratio = zcount/n;
    printf("%.6f\n%.6f\n%.6f", pratio, nratio, zratio);
}

int main() {
    int n, k;
    cin >> n;
    
    vector<int> vect;
    for(int i = 0; i < n; i++) {
        cin >> k;
        vect.push_back(k);
    }
    
    plusMinus(vect);
    return 0;
}
