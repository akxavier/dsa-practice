#include<iostream>
#include<valarray>

using namespace std;

int main() {
	valarray<int> varr = {10, 2, 20, 1, 30}, varr1;

	cout << "Initial valarray is: ";
	for(int &x : varr)
		cout << x << " ";
	cout << endl;

	varr1 = varr.apply([](int x) { return x /= 2; });

	cout << "Manipulated  valarray is: ";
        for(int &x : varr1)
                cout << x << " ";
        cout << endl;

	cout << "Sum of elements of varr: " << varr.sum() << endl;
	cout << "Maximum element in varr: " << varr.max() << endl;

	varr1 = varr.shift(3);

	cout << "Valarray after left-shift 3 places: ";
        for(int &x : varr1)
                cout << x << " ";
        cout << endl;

	varr1 = varr.cshift(-2);

	cout << "Valarray after right-circular-shift 2 places: ";
        for(int &x : varr1)
                cout << x << " ";
        cout << endl;

	return 0;
}
