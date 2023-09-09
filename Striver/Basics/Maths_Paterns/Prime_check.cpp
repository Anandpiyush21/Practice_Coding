#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

bool isPrime1(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    return cnt==2;
}

bool isPrime2(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(n/i != i ){
                cnt++;
        }
    }
    // cout<<cnt<<" ";
    }     
    
    return cnt==2;
}

int main(){
cout<<isPrime1(6)<<endl;
cout<<isPrime1(5)<<endl;
cout<<isPrime2(6)<<endl;
cout<<isPrime2(5)<<endl;
return 0;
}