#include<bits/stdc++.h>
using namespace std;

long findMaximumSum(vector<int> v, int k) {
	int start, i = 0;
	int sum = -1;
	int maxSum = -1;
	int n = v.size();

	while(i + k <= n) {
		start = i;
		sum = -1;
		int flag = 0;

		for(int j = 0; j < k; j++) {
			if(v[i] == v[i - 1]) {
				flag = 1;
				break;
			}
			if(sum == -1)
				sum = v[i++];
			else
				sum += v[i++];
		}

		if(flag) {
			continue;
		}

		if(sum > maxSum)
			maxSum = sum;

		while(i < n) {
			if(v[i] == v[i - 1]) {
				break;
			}

			sum -= v[start++];
			sum += v[i++];

			if(sum > maxSum)
				maxSum = sum;
		}
	}

	return maxSum;
}

int main() {
	int n, price, k;
	vector<int> stockPrice;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> price;
		stockPrice.push_back(price);
	}

	cin >> k;

	cout << findMaximumSum(stockPrice, k);
}
