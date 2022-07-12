#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i, count;
    int n = min(s.size(), t.size());
    for(i = 0; i < n; i++) {
        if(s[i] != t[i]) 
            break;
    }
    
    if(i == 0) {
        count = s.size() + t.size();
    }
    else if((i == s.size()) && (i == t.size()))
        count = 0;
        
    else if(i == s.size()) {
        count = t.size() - i;
    }
    
    else if(i == t.size()) {
        count = s.size() - i;
    }
    
    else {
        count = (s.size() - i) + (t.size() - i);
    }
    
    if(count == k)
        return "Yes";
    else if(count > k)
        return "No";
    else {
        if(k > s.size() + t.size())
            return "Yes";
            
        int rem = k - count;
        if(rem % 2 == 0)
            return "Yes";
        else
            return "No";
    }
}

int main() {
    string s, t;
    int k;
    getline(cin, s);
    getline(cin, t);
    cin >> k;
    cout << appendAndDelete(s, t, k);
}
