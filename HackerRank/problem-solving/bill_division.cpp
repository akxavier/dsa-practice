#include<iostream>
#include<vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); i++) {
        if(i != k)
            sum += bill[i];
    }
    
    int share = sum / 2;
    if(share == b)
        cout << "Bon Appetit";
    else
        cout << bill[k] / 2;
}

int main() {
    int n, k, b, cost;
    vector<int> bill;
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> cost;
        bill.push_back(cost);
    }
    cin >> b;
    
    bonAppetit(bill, k, b);
}
