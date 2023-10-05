#include <stdio.h>
//Q3 updated
int main()
{
    int N;
    scanf("%d", &N);
    int jumps = 0;
    int distance_covered = 0;
    int Jump_length = 1;

    while (distance_covered < N)
    {
        distance_covered += Jump_length;
        Jump_length += 9;
        jumps++;
    }
    printf("%d", jumps * 15);
    return 0;
}
