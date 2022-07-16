#include<iostream>
using namespace std;

string timeInWords(int h,int m) {
    string hour, min, conj, res;
    
    if(m > 30)
        h++;
        
    switch(h) {
        case 1: hour = "one";
                break;
        case 2: hour = "two";
                break;
        case 3: hour = "three";
                break;
        case 4: hour = "four";
                break;
        case 5: hour = "five";
                break;
        case 6: hour = "six";
                break;
        case 7: hour = "seven";
                break;
        case 8: hour = "eight";
                break;
        case 9: hour = "nine";
                break;
        case 10: hour = "ten";
                break;
        case 11: hour = "eleven";
                break;
        case 12: hour = "twelve";
                break;
    }
    
    if(m == 0) {
        res = hour + " o' clock";
        return res;
    }
    
    switch(m) {
        case 1:
        case 59: min = "one";
                break;
        case 2:
        case 58: min = "two";
                break;
        case 3:
        case 57: min = "three";
                break;
        case 4:
        case 56: min = "four";
                break;
        case 5:
        case 55: min = "five";
                break;
        case 6:
        case 54: min = "six";
                break;
        case 7:
        case 53: min = "seven";
                break;
        case 8:
        case 52: min = "eight";
                break;
        case 9:
        case 51: min = "nine";
                break;
        case 10:
        case 50: min = "ten";
                break;
        case 11:
        case 49: min = "eleven";
                break;
        case 12:
        case 48: min = "twelve";
                break;
        case 13:
        case 47: min = "thirteen";
                break;
        case 14:
        case 46: min = "fourteen";
                break;
        case 15:
        case 45: min = "quarter";
                break;
        case 16:
        case 44: min = "sixteen";
                break;
        case 17:
        case 43: min = "seventeen";
                break;
        case 18:
        case 42: min = "eighteen";
                break;
        case 19:
        case 41: min = "nineteen";
                break;
        case 20:
        case 40: min = "twenty";
                break;
        case 21:
        case 39: min = "twenty one";
                break;
        case 22:
        case 38: min = "twenty two";
                break;
        case 23:
        case 37: min = "twenty three";
                break;
        case 24:
        case 36: min = "twenty four";
                break;
        case 25:
        case 35: min = "twenty five";
                break;
        case 26:
        case 34: min = "twenty six";
                break;
        case 27:
        case 33: min = "twenty seven";
                break;
        case 28:
        case 32: min = "twenty eight";
                break;
        case 29:
        case 31: min = "twenty nine";
                break;
        case 30: min = "half";
                break;        
    }
    
    if(m <= 30)
        conj = " past ";
    else
        conj = " to ";
        
    if((m == 1) || (m == 59))
        min = min + " minute";
    else if((m != 15) && (m != 30) && (m != 45))
        min = min + " minutes";
        
    res = min + conj + hour;
    return res;
}

int main() {
    int h, m;
    cin >> h >> m;
    cout << timeInWords(h, m);
}
