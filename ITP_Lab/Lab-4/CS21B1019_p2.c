#include <stdio.h>

int find(int dec_n)
{
    if (dec_n == 0) 
    return 0; 
    else
    return (dec_n % 2 + 10 * find(dec_n / 2));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",find(n));
}