#include<iostream>
#include<string>
using namespace std;

int isKaprekar(int k) {    
    string n = to_string(k);
    int d = n.size();
    long long sqn = (long long) k * k;
    string sq = to_string(sqn);
    int sqd = sq.size();
    
    string l, r;
    if(sqd == 2 * d) {
        string ls(sq.begin(), sq.begin() + d);
        string rs(sq.begin() + d, sq.end());
        
        l = ls;
        r = rs;
    }
    else if(sqd == d) {
        string rs(sq.begin(), sq.end());
        l = "0";
        r = rs;
    }
    else {
        string ls(sq.begin(), sq.begin() + d - 1);
        string rs(sq.begin() + d - 1, sq.end());
        
        l = ls;
        r = rs;
    }
    int ln = stoi(l);
    int rn = stoi(r);
    
    if(ln + rn == k)
        return 1;
    else
        return 0;
}

void kaprekarNumbers(int p, int q) {
    int flag = 0;
    for(int i = p; i <= q; i++) {
        if(isKaprekar(i)) {
            cout << i << " ";
            flag = 1;
        }
    }
    if(flag == 0)
        cout << "INVALID RANGE";
}

int main() {
    int p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
}

