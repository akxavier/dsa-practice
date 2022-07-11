#include<iostream>
using namespace std;

int reverseInt(int n) {
    int rev = 0;
    while(n != 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    
    for(int m = i; m <= j; m++) {
        int revInt = reverseInt(m);
        int diff = (m > revInt) ? (m - revInt) : (revInt - m);
        if(diff % k == 0)
            count++;
    }
    return count;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    cout << beautifulDays(i, j, k);
}
