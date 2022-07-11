#include<iostream>
#include<vector>
using namespace std;

int pickingNumbers(vector<int> v) {
    int arr[100] = {0};
    for(int &x : v)
        arr[x]++;
        
    int max = 0;
    for(int i = 0; i < 99; i++)
        if(arr[i] + arr[i + 1] > max)   
            max = arr[i] + arr[i + 1];
            
    return max;
}

int main() {
    int n, elem;
    vector<int> vect;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    cout << pickingNumbers(vect);
}
