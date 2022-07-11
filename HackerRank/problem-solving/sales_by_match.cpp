#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sockMerchant(vector<int> socks) {
    int count = 0;
    sort(socks.begin(), socks.end());
   
    int curr = socks[0];
    int nos = 0;
    for(int i = 0; i <= socks.size(); i++) {
        if(i == socks.size()) {
            int pairs = nos / 2;
            count += pairs;
        }
        else if(socks[i] != curr) {
            int pairs = nos / 2;
            count += pairs;
            curr = socks[i];
            nos = 1;
            continue;
        }
        else {
            nos++;
        }
    }
    return count;
}

int main() {
    int n, color;
    vector<int> socks;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> color;
        socks.push_back(color);
    }
    cout << sockMerchant(socks);
}
