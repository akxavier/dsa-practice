#include<iostream>
using namespace std;

template <typename T>
T Ret_Max(T x, T y) {
	return (x > y) ? x : y;
}

int main() {
	cout << "Greater among 8 and 3 is: " << Ret_Max<int>(8, 3) << endl;		//call Ret_Max for int
	cout << "Greater among g and t is: " << Ret_Max<char>('g', 't') << endl;	//call Ret_Max for char
	return 0;
}
