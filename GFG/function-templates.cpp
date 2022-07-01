#include<iostream>
using namespace std;

template <typename T>
T Ret_Max(T x, T y) {
	return (x > y) ? x : y;
}

int main() {
	cout << "Greater among 8 and 3 is: " << Ret_Max(8, 3) << endl;
	cout << "Greater among g and t is: " << Ret_Max('g', 't') << endl;
	return 0;
}
