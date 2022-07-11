#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int countValleys(int n, string path) {
    int count = 0;
    int height = 0;
    
    for(int i = 0; i < n; i++) {
        if(path[i] == 'D')
            height--;
        else if(path[i] == 'U') {
            height++;
            if(height == 0)
                count++;
        }
    }
    
    return count;
}

int main() {
    int steps;
    cin >> steps;
    getchar();
    string path;
    getline(cin, path);
    cout << countValleys(steps, path);
}
