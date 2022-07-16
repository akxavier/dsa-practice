#include<iostream>
using namespace std;

int chocolateFeast(int n, int c, int m) {
    int count = 0;
    count += (n / c);
    int wrapperCount = count;
    
    while(wrapperCount >= m) {
        count += (wrapperCount / m);
        wrapperCount = (wrapperCount / m) + (wrapperCount % m);
    }
    
    return count;
}

int main() {
    int t, n, c, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> c >> m;
        cout << chocolateFeast(n, c, m) << endl;
    }
}
