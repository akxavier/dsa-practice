#include<iostream>
#include<vector>
using namespace std;

int divisibleSumPairs(vector<int> vect, int k) {
    int count = 0;
    for(int i = 0; i < vect.size(); i++) {
        for(int j = i + 1; j < vect.size(); j++) {
            if((vect[i] + vect[j]) % k == 0)
                count++;
        }
    }
    return count;
}

int main() {
    int n, k, elem;
    vector<int> vect;
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    cout << divisibleSumPairs(vect, k);
}
