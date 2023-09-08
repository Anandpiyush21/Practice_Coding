#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum_arm(int n){
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum=sum+pow(ld,4);
        n/=10;
    }
    return sum;
}

bool isArm(int n){
    return (n==sum_arm(n));
}

int main(){

cout<<isArm(1634)<<endl;
cout<<isArm(634)<<endl;


return 0;
}