#include<iostream>
#include<vector>
using namespace std;

string angryProfessor(vector<int> vect, int k) {
    int count = 0;
    for(int &x : vect)
        if(x <= 0)
            count++;
    
    if(count >= k)
        return "NO";
    else
        return "YES";
}

int main() {
    int t, n, k, time;
    cin >> t;
    for(int i = 0; i < t; i++) {
        vector<int> vect;
        cin >> n >> k;
        for(int j = 0; j < n; j++) {
            cin >> time;
            vect.push_back(time);
        }
        cout << angryProfessor(vect, k) << endl;
    }
}
