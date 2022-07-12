#include<iostream>
#include<cmath>
using namespace std;

int squares(int a, int b) {
    int x = ceil(sqrt(a)) - 1;
    int y = sqrt(b);
    return (y - x);
}

int main() {
    int q, a, b;
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << squares(a, b) << endl;
    }
}
