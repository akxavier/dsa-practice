#include<iostream>
#include<vector>
using namespace std;

int beautifulTriplets(int d, vector<int> vect) {
    int count = 0;
    int n = vect.size();
    for(int i = 0; i < n - 2; i++) {
        int start = vect[i];
        int mid = start + d;
        int midCount = 0;
        int j = i + 1;
        while(vect[j] <= mid) {
            if(vect[j] == mid)
                midCount++;
            j++;
        }
        
        int end = mid + d;
        int endCount = 0;
        while((j < n) && (vect[j] <= end)) {
            if(vect[j] == end)
                endCount++;
            j++;
        }
        
        count += (midCount * endCount);
    }
    
    return count;
}

int main() {
    int n, d, elem;
    vector<int> vect;
    cin >> n >> d;
    for(int i = 0; i < n; i++) {
        cin >> elem;
        vect.push_back(elem);
    }
    cout << beautifulTriplets(d, vect);
}
