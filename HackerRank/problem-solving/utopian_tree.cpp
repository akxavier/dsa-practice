#include<iostream>
using namespace std;

int utopianTree(int n) {
    int height = 1;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            height++;
        else
            height *= 2;
    }
    return height;
}

int main() {
    int q, n;
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> n;
        cout << utopianTree(n) << endl;
    }
}
