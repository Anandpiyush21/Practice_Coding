// Method 1 using While loop
#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("cheemdoge ");
        } else if (i % 5 == 0) {
            printf("cheem ");
        } else if (i % 7 == 0) {
            printf("doge ");
        } else {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
// Method 2 using For loop
#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("cheem doge ");
        } else if (i % 5 == 0) {
            printf("cheem ");
        } else if (i % 7 == 0) {
            printf("doge ");
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
