#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hurdleRace(vector<int> height, int k) {
    int maxHeight = *max_element(height.begin(), height.end());
    if(maxHeight < k)
        return 0;
    else
        return (maxHeight - k);
}

int main() {
    int n, k, item;
    vector<int> height;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> item;
        height.push_back(item);
    }
    cout << hurdleRace(height, k);
}
