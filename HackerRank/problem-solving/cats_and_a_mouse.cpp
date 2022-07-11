#include<iostream>
#include<string>
using namespace std;

string catAndMouse(int x, int y, int z) {
    int ac = (x > z) ? (x - z) : (z - x);
    int bc = (y > z) ? (y - z) : (z - y);
    if(ac < bc)
        return "Cat A";
    else if(ac > bc)
        return "Cat B";
    else
        return "Mouse C";
}

int main() {
    int q, x, y, z;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> x >> y >> z;
        cout << catAndMouse(x, y, z) << endl;
    }
}
