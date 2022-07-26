#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findTotalWeight(vector<int> v) {
	vector<int>::iterator min;
	int n = v.size();
	int sum = 0;

	while(n > 0) {
		min = min_element(v.begin(), v.end());
		sum += *min;
		if(min != v.begin()) {
			v.erase(min - 1);
			min--;
		}

		if(min + 1 != v.end())
			v.erase(min + 1);

		v.erase(min);
		n = v.size();
	}

	return sum;
}

int main() {
	int n, elem;
	vector<int> v;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> elem;
		v.push_back(elem);
	}

	cout << findTotalWeight(v);
}
