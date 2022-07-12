#include<iostream>
#include<vector>
using namespace std;

int jumpingOnClouds(vector<int> c) {
    int curr = 0;
    int n = c.size();
    int count = 0;
    while(curr != n - 1) {
        if(curr + 1 == n - 1) {
            count++;
            curr++;
            break;
        }
        if(c[curr + 2] == 1)
            curr += 1;
        else
            curr += 2;
        count++;
    }
    return count;
}

int main() {
    int n, cloud;
    cin >> n;
    vector<int> c;
    for(int i = 0; i < n; i++) {
        cin >> cloud;
        c.push_back(cloud);
    }
    cout << jumpingOnClouds(c);
}
