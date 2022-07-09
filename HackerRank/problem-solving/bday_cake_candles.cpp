#include<iostream>
#include<vector>
using namespace std;

int birthdayCakeCandles(vector<int> v) {
    int hmax = v[0], max_cnt = 0;
    int n = v.size();
    
    for(int i = 0; i < n; i++) {
        if(v[i] > hmax) {
            hmax = v[i];
            max_cnt = 1;
        }
	else if(v[i] == hmax) {
            max_cnt++;
        }
    }
    
    return max_cnt;
}

int main() {
    int n, elem;
    vector<int> vect;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    int num = birthdayCakeCandles(vect);
    cout << num;
    return 0;
}
