#include<bits/stdc++.h>
#include<array>
using namespace std;

/*  METHOD 1
vector<int> reverseArray(vector<int> A) {
    int n = A.size();
    
    for(int i = 0; i < n - 1 - i; i++) {
        swap(A[i], A[n-1-i]);
    }
    
    return A;
}*/

vector<int> reverseArray(vector<int> A) {
    reverse(A.begin(), A.end());
    return A;
}

int main() {
    int n;
    cin >> n;
    vector<int> A;
    int elem;
    for(int i = 0; i < n; i++) {    
        cin >> elem;
        A.push_back(elem);  
    }  
    A = reverseArray(A);
    
    for(int i = 0; i < n; i++) 
        cout << A[i] << " ";
    return 0;
}

