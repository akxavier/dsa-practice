#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimumDistances(vector<int> v) {
    int n = v.size();
    int min = n;
    for(int i = 0; i < n - 1; i++) {
        vector<int>::iterator it = find(v.begin() + i + 1, v.end(), v[i]);
        if(it == v.end())
            continue;
        
        int index = distance(v.begin(), it);
        int dist = index - i;
        
        if(dist < min)
            min = dist;
    }
    
    if(min == n)
        return -1;
    else
        return min;
}

int main() {
    int n, elem;
    vector<int> vect;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    
    cout << minimumDistances(vect);
}

