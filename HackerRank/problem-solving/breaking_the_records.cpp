#include<iostream>
#include<vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0], min = scores[0];
    int maxcnt = 0, mincnt = 0;
    
    for(int &x : scores) {
        if(x > max) {
            max = x;
            maxcnt++;
        }
        else if(x < min) {
            min = x; 
            mincnt++;
        }
    }
        
    return {maxcnt, mincnt};
}

int main() {
    int n, score;
    vector<int> scores;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> score;
        scores.push_back(score);
    }
    
    vector<int> records = breakingRecords(scores);
    
    for(int &x : records)
        cout << x << " ";
    return 0;
}
