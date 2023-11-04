#include <stdio.h>
void printSubsets(char arr[], int n) {
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%c", arr[j]);
            }
        }
        printf("\n");
        
    }
}

int main() {
    int size;
    scanf("%d", &size);
    char arr[size];
    scanf("%s", arr);
    printSubsets(arr, size);
}
