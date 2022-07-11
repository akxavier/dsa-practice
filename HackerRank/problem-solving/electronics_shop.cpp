#include<iostream>
#include<vector>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max = -1;
    for(int i = 0; i < keyboards.size(); i++) {
        for(int j = 0; j < drives.size(); j++) {
            int cost = keyboards[i] + drives[j];
            if(cost <= b) {
                if(cost > max)
                    max = cost;
            }
        }
    }
    return max;
}

int main() {
    int b, n, m, cost;
    cin >> b >> n >> m;
    
    vector<int> keyboards, drives;
    for(int i = 0; i < n; i++) {
        cin >> cost;
        keyboards.push_back(cost);
    }
    for(int i = 0; i < m; i++) {
        cin >> cost;
        drives.push_back(cost);
    }
    
    cout << getMoneySpent(keyboards, drives, b);
}
