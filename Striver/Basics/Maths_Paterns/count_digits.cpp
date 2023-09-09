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

int count_digits2(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main(){
cout<<count_digits1(3)<<endl;
cout<<count_digits2(33)<<endl;
cout<<count_digits2(433)<<endl;
cout<<count_digits1(3345)<<endl;
return 0;
}