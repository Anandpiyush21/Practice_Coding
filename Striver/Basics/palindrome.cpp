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

bool isPal(int n){
    return n==rev(n);
}

int main(){

cout<<isPal(12321)<<endl;
cout<<isPal(12301)<<endl;
cout<<isPal(128821)<<endl;

return 0;
}