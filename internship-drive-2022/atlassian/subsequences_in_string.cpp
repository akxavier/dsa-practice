#include<iostream>
#include<vector>
#include<string>
using namespace std;

int countSubsequence(string s1, string s2) {
	int n = s1.size();
	int m = s2.size();
	vector<int> count(m, 0);

	for(int i = 0; i < n; i++) {
		for(int j = m - 1; j >= 0; j--) {
			if(s1[i] == s2[j]) {
				if(j == 0) 
					count[j] += 1;
				else
					count[j] += count[j - 1];

				cout << i << " " << j << endl;
                		for(int &x : count)
                        		cout << x << " ";
                		cout << endl;
			}
		}
	}

	return count[m - 1];
}

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	cout << countSubsequence(s1, s2);
}
