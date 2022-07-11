#include<iostream>
#include<vector>
using namespace std;

int birthday(vector<int> bars, int d, int m) {
    int count = 0;
    
    for(auto it = bars.begin(); it <= bars.end() - m; it++) {
        int sum = 0;
        auto temp = it;
        for(int j = 0; j < m; j++) {
            sum += *temp;
            temp++;
        }
        if(sum == d)
            count++;
    }
    return count;
}

int main() {
    int n, d, m, item;
    vector<int> bars;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> item;
        bars.push_back(item);
    }
    cin >> d >> m;
    
    cout << birthday(bars, d, m);
    return 0;
}
