#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_digits1(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}

int sum_arm(int n){
    int sum=0;
    int k=n;
    int ld;
    while(n>0){
        ld=n%10;
        sum=sum+pow(ld,count_digits1(k));
        // cout<<sum<<" ";
        n/=10;
    }
    // cout<<"\n";
    return sum;
}

bool isArm(int n){
    return (n==sum_arm(n));
}

int main(){
// cout<<count_digits1(1634)<<" "<<count_digits1(371)<<endl;
cout<<isArm(1634)<<endl;
cout<<isArm(371)<<endl;



return 0;
}