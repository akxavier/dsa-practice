#include<iostream>
using namespace std;

long taumBday(long b, long w, long bc, long wc, long z) {
    unsigned long long cost;
    if(bc + z < wc)
        cost = ((b + w) * bc) + (w * z);
    else if(wc + z < bc)
        cost = ((b + w) * wc) + (b * z);
    else
        cost = (b * bc) + (w * wc);
        
    return cost;
}

int main() {
    long t, b, w, bc, wc, z;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> b >> w >> bc >> wc >> z;
        cout << taumBday(b, w, bc, wc, z) << endl;
    }
}
