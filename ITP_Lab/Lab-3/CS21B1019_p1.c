#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            for(int i=1;i<=n+1;i++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int i=1;i<=n;i++){
                printf("*");
            }
            printf("\n");
        }
    }
}