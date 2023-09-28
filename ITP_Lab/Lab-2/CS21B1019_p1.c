#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        if((i*n)%10)printf("%d * %d = %d\n",n,i,i*n);
        else printf("%d * %d = Yeahh\n",n,i);
    }
}