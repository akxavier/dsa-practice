#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int arr[] = {2, 1, 5, 6, 8, 7};
	vector<int> vect(arr, arr + 6);

	cout << "Initial array is: ";
	for(int &x : vect) 
		cout << x << " ";
	cout << endl;

	partition(vect.begin(), vect.end(), [](int x) { return x % 2 == 0; });

	cout << "Vector after partition: ";
	for(int &x : vect)
		cout << x << " ";
	cout << endl;

	vect = {2, 1, 5, 6, 8, 7};

	stable_partition(vect.begin(), vect.end(), [](int x) {return x % 2 == 0;});

	cout << "Vector after stable partition: ";
	for(int &x : vect) 
		cout << x << " ";
	cout << endl;

	vector<int>::iterator it = partition_point(vect.begin(), vect.end(), [](int x) { return x % 2 == 0; });
	vector<int>::iterator it1;

	cout << "Elements which satisfied the partition condition: ";
	for(it1 = vect.begin(); it1 != it; it1++)
		cout << *it1 << " ";
	cout << endl;

	return 0;
}
