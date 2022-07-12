#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

long repeatedString(string s, long n) {
    int len = s.size();
    int unitCnt = count(s.begin(), s.end(), 'a');
    int rem = n % len;
    int remCnt = 0;
    for(int i = 0; i < rem; i++) 
        if(s[i] == 'a')
            remCnt++;
    long a = (unitCnt * (n / len)) + remCnt;
    return a;
}

int main() {
    long n;
    string str;
    getline(cin, str);
    cin >> n;
    cout << repeatedString(str, n);
}
