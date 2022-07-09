#include<iostream>
#include<vector>
using namespace std;

vector<int> gradingStudents(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= 38) {
            int diff = 5 - (v[i] % 5);
            if(diff < 3) 
                v[i] += diff;
        }
    }
    return v;
}

int main() {
    int n, elem;
    vector<int> vect;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    vect = gradingStudents(vect);
    
    for(int &x : vect)
        cout << x << endl;
    return 0;
}
