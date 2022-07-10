#include<iostream>
#include<string>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1 =< v2)
        return "NO";
    int dist = x2 - x1;
    int speed = v1 - v2;
    
    if(dist % speed == 0)
        return "YES";
    else
        return "NO";
}

int main() {
    int x1, x2, v1, v2;
    string ans;
    cin >> x1 >> v1 >> x2 >> v2;
    ans = kangaroo(x1, v1, x2, v2);
    cout << ans;
}
