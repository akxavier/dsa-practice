#include<iostream>
#include<iomanip>
using namespace std;

void staircase(int n) {
    for(int i = 0; i < n; i++) {
        cout << setw(n - i);
        for(int j = i + 1; j > 0; j--)
            cout << "#";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
