#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string biggerIsGreater(string w) {
    /* Using std::next_permutation
     * 
     * if(next_permutation(w.begin(), w.end()))
     *     return w;
     * else
     *     return "no answer";
     */

    string rev = w;
    sort(rev.rbegin(), rev.rend());
    if(w.compare(rev) == 0)
        return "no answer";
    
    int i, j;
    int n = w.size();
    
    for(i = n - 2; i >= 0; i--) {
        char min;
        char max = *max_element(w.begin() + i, w.end());
        if(max <= w[i])
            continue;
            
        int minPos = n;
        for(j = i + 1; j < n; j++) {
            if((minPos == n) && (w[j] > w[i]) && (w[j] <= max)) {
                minPos = j;
                min = w[j];
            }
            else if((minPos != n) && (w[j] > w[i]) && (w[j] < min) ) {
                minPos = j;
                min = w[j];
            }
        }
        
        swap(w[i], w[minPos]);
        break;
    }
    
    sort(w.begin() + i + 1, w.end());    
    return w;
}

int main() {
    int t;
    string w;
    cin >> t;
    getchar();
    for(int i = 0; i < t; i++) {
        getline(cin, w);
        cout << biggerIsGreater(w) << endl;
    }
}

