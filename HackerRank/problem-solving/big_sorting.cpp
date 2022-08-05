#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string i, string j) {
    int n = i.size();
    int m = j.size();
    
    if(n == m)
        return i < j;
    else
        return n < m;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> unsorted(n);
    
    for(int i = 0; i < n; i++) {
        cin >> unsorted[i];
    }
    
    sort(unsorted.begin(), unsorted.end(), compare);
    
    for(string &x : unsorted)
        cout << x << endl;
}

