#include<stdio.h>

void fibo(int n, int a, int b)
{
    if (n > 0) {
    fibo(n - 1, b, a + b);
    printf("%d ",a);
    }
    else return;
}

int main(){
    int n;
    scanf("%d",&n);
    fibo(n,0,1);
}