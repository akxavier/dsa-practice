#include<iostream>
#include<string>
using namespace std;

string timeConversion(string str) {
    if(str[8] == 'A') {
        if(str[0] == '1' && str[1] == '2') {
            str[0] = '0';
            str[1] = '0';
        }
    }
    
    else {
        if(str[0] == '1' && str[1] == '2') {
            
        }
        else {
            str[0] += 1;
            str[1] += 2;
        }
    }
    
    str.erase(8);
    return str;
}

int main() {
    string str;
    getline(cin, str);
    str = timeConversion(str);
    cout << str;
    return 0;
}
