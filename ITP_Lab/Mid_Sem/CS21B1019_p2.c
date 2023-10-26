#include <stdio.h>

void Fact(int n, int *answer) {
    if (n <= 1) {
        *answer = 1;
    } else {
        int tempResult;
        Fact(n - 1, &tempResult);
        *answer = n * tempResult;
    }
}

int main() {
    int num, factorial;
    scanf("%d", &num);
    Fact(num, &factorial);
    printf("%d", factorial);
    return 0;
}