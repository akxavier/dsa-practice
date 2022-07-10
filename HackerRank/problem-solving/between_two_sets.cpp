#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    int amax = *max_element(a.begin(), a.end());
    int bmin = *min_element(b.begin(), b.end());
    
    int count = 0;
    
    for(int i = amax; i <= bmin; i++) {
        int flag = 1;
        for(int &x : a)
            if(i % x != 0)
                flag = 0;
                
        for(int &x : b)
            if(x % i != 0)
                flag = 0;
                
        if(flag)
            count++;
    }
    
    return count;
}

int main() {
    int n, m, item;
    vector<int> a, b;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> item;
        a.push_back(item);
    }
    
    for(int i = 0; i < m; i++) {
        cin >> item;
        b.push_back(item);
    }
    
    int x = getTotalX(a, b);
    cout << x;
    return 0;
}
