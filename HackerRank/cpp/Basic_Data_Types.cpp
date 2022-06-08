#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char ch;
    float x;
    double y;
    
    scanf("%d %ld %c %f %lf", &n, &l, &ch, &x, &y);
    printf("%d\n%ld\n%c\n", n, l, ch);
    printf("%.3f\n%.9f", x, y);
    return 0;
}
