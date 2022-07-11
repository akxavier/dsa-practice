#include<iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    int rem = m % n;
    int last = s + rem - 1;
    if(last == 0)
        return n;
    if(last > n)
        last = last % n;
    return last;
}

int main() {
    int t, n, m, s;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
}
