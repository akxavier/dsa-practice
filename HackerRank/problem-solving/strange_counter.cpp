#include<iostream>
using namespace std;

long long strangeCounter(long long n) {
    long long inc = 3;
    long time = 1;
    long val = inc;
    
    while(time + inc <= n) {
        time += inc;
        inc *= 2;
        val = inc;
    }
    
    val -= (n - time);
    return val;
}

int main() {
    long long n;
    cin >> n;
    cout << strangeCounter(n);
}
