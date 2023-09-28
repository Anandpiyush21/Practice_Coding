#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int leaps = 0;
    int distance_covered = 0;
    int leap_length = 1; 

    while (distance_covered < N) {
        distance_covered += leap_length;
        leap_length += 9;
        leaps++;
    }
    printf("%d", leaps*15);
    return 0;
}
