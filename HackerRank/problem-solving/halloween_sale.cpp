#include<iostream>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
    int count = 0;
    int cost = p;
    while (s >= cost) {
        s -= cost;
        count++;
        cost -= d;
        
        if(cost < m)
            cost = m;
    }
    
    return count;
}

int main() {
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    cout << howManyGames(p, d, m, s);
}
