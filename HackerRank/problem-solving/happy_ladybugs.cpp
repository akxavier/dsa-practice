#include<bits/stdc++.h>
using namespace std;

string happyLadybugs(string b) {
    int n = b.size();
    
    // Check if already happy
    if(find(b.begin(), b.end(), '_') == b.end()) {
        // Return NO if b is single element string
        if(n == 1)
            return "NO";
            
        int happy = 1;
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                if(b[1] != b[0]) {
                    happy = 0;
                    break;
                }
            }
            
            else if(i == n - 1) {
                if(b[n - 1] != b[n - 2]) {
                    happy = 0;
                    break;
                }
            }
                
            else {
                if(b[i] != b[i - 1] && b[i] != b[i + 1]) {
                    happy = 0;
                    break;
                }
            }
        }
        
        if(happy)
            return "YES";
        else
            return "NO";
    }
    
    else {
        // Remove underscores
        b.erase(remove(b.begin(), b.end(), '_'), b.end());
        sort(b.begin(), b.end());
        n = b.size();
        if(n == 0)
            return "YES";
            
        int happy = 1;
        
        for(int i = 0; i < n; i++) {
            char curr = b[i];
            
            if(b[i + 1] != curr) {
                happy = 0;
                break;
            }
            
            // Finding next colored ladybug
            do {
                i++;
            } while(i < n && b[i] == curr);
            i--;
        }
        
        if(happy)
            return "YES";
        else
            return "NO";
    }
}

int main() {
    int g, n;
    string b;
    cin >> g;
    
    for(int i = 0; i < g; i++) {
        cin >> n;
        getchar();
        getline(cin, b);
        cout << happyLadybugs(b) << endl;
    }
}
