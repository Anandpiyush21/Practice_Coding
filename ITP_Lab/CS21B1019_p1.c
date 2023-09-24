// Method 1 using While loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("cheem doge \n");
        } else if (i % 5 == 0) {
            printf("cheem \n");
        } else if (i % 7 == 0) {
            printf("doge \n");
        } else {
            printf("%d \n", i);
        }
        i++;
    }

    return 0;
}


// Method 2 using For loop
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("cheem doge \n");
        } else if (i % 5 == 0) {
            printf("cheem \n");
        } else if (i % 7 == 0) {
            printf("doge \n");
        } else {
            printf("%d \n", i);
        }
    }

    return 0;
}



// Using switch
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
// In the place of for loop, you can also take while loop
    for (int i = 1; i <= n; i++) {
        switch ((i % 5 == 0) * 2 + (i % 7 == 0)) {
            case 0:
                printf("%d\n", i);
                break;
            case 1:
                printf("doge\n");
                break;
            case 2:
                printf("cheem\n");
                break;
            case 3:
                printf("cheem doge\n");
                break;
        }
    }

    return 0;
}

