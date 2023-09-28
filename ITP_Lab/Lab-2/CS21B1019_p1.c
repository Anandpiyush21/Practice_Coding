#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        ((i*n)%10)?printf("%d * %d = %d\n",n,i,i*n):printf("%d * %d = Yeahh\n",n,i);
    }
}