#include <stdio.h>

int main() {
    int num;
    int pC = 0;
    int nC = 0;
    int zC = 0;

    do {
        scanf("%d", &num);

        if (num > 0) {
            pC++;
        } else if (num < 0) {
            nC++;
        } else if (num == 0) {
            zC++;
        }
    } while (num != -1);

    printf("%d %d %d",pC,nC,zC);

    return 0;
}