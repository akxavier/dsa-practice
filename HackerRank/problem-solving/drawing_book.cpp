#include<iostream>
using namespace std;

int pageCount(int n, int p) {
    if(p == 1 || p == n)
        return 0;
        
    if((n % 2 != 0) && (p == n - 1))
        return 0;
        
    int mid = n / 2;
    int count = 0;
    
    if(p <= mid) { // count from front
        int curr = 2;
        count++;
        
        while(1) {
            if((p == curr) || (p == curr + 1))
                return count;
            curr += 2;
            count++;
        }
    }
    else { // count from back
        int curr;
        if(n % 2 == 0)
            curr = n;
        else
            curr = n - 1;
            
        while(1) {
            count++;
            curr -= 2;
            if((p == curr) || (p == curr + 1))
                return count;
        }
    }
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << pageCount(n, p);
}

