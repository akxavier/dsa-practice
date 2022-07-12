#include<iostream>
#include<vector>
using namespace std;

int equalizeArray(vector<int> v) {
    vector<int> count;
    count.assign(100, 0);
    for(int &x : v)
        count[x]++;
    int max = 0;
    for(int i = 1; i < 100; i++) {
        if(count[max] < count[i])
            max = i;
    }
    
    return (v.size() - count[max]);
}

int main(){
    int n, elem;
    vector<int> vect;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    cout << equalizeArray(vect);
}
