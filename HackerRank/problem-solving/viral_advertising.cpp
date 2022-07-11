#include<iostream>
using namespace std;

int viralAdvertising(int n) {
    int likes = 0;
    int people = 5;
    for(int i = 0; i < n; i++) {
        likes += (people / 2);
        people = (people / 2) * 3;
    }
    return likes;
}

int main() {
    int n;
    cin >> n;
    cout << viralAdvertising(n);
}
