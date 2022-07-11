#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int migratoryBirds(vector<int> birds) {
    int max = 1;
    int maxCount = count(birds.begin(), birds.end(), 1);
    for(int i = 2; i <= 5; i++) {
        int cnt = count(birds.begin(), birds.end(), i);
        if(cnt > maxCount) {
            max = i;
            maxCount = cnt;
        }
    }
    return max;
}

int main() {
    int n, id;
    vector<int> birds;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> id;
        birds.push_back(id);
    }
    
    cout << migratoryBirds(birds);
}
