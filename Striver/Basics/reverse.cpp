#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int rev(int n){
    int num=0;
    while(n>0){
        int ld=n%10;
        num=(num*10)+ld;
        n=n/10;
    }
    return num;
}

int main(){

cout<<rev(1234)<<endl;
cout<<rev(18524)<<endl;
cout<<rev(145234)<<endl;
return 0;
}