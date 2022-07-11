#include<iostream>
using namespace std;

void dayOfProgrammer(int year) {
    if(year < 1918) {
        if(year % 4 == 0) 
            cout << "12.09." << year;
        else
            cout << "13.09." << year;
    }
    else if(year > 1918) {
        if(year % 100 == 0)
            if(year % 400 != 0)
                cout << "13.09." << year;
            else
                cout << "12.09." << year;
        else if(year % 4 == 0)
            cout << "12.09." << year;
        else 
            cout << "13.09." << year;
    }
    else {
        cout << "26.09.1918";
    }
}

int main() {
    int year;
    cin >> year;
    dayOfProgrammer(year);
}
