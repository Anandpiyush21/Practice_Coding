#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}

int main(){
cout<<count_digits(3)<<endl;
cout<<count_digits(33)<<endl;
cout<<count_digits(433)<<endl;
cout<<count_digits(3345)<<endl;
return 0;
}