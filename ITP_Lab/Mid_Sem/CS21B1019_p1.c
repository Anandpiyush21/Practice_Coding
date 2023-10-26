#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        a = (a < 0) ? -a : a;
        b = (b < 0) ? -b : b;
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("%d", gcd);
    return 0;
}