class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = t.size();
        int n = s.size();

        int i, j = 0;

        for(i = 0; i < m; i++) {
            if(t[i] == s[j]) {
                j++;
                if(j == n)
                    break;
            }
        }

        return ( (j == n) ? true : false );
    }
};
