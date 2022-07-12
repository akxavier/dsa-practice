#include<iostream>
using namespace std;

int findDigits(int n) {
    int count = 0;
    int temp = n;
    while(temp != 0) {
        int dig = temp % 10;
        temp = temp / 10;
        if(dig == 0)
            continue;
        if(n % dig == 0)
            count++;
    }
    return count;
}

int main() {
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << findDigits(n) << endl;
    }
}
