#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

void print_Name(int i,int n){
    if(i>n) return;
    cout<<"Om"<<endl;i++;
    print_Name(i,n);
}

void print_1_N(int i,int n){
    if(i>n) return;
    cout<<i<<endl;i++;
    print_1_N(i,n);
}

void print_N_1(int i,int n){
    if(i<1) return;
    cout<<i<<endl;i--;
    print_1_N(i,n);
}

int main(){
// print_Name(1,5);
// print_1_N(1,10);
print_N_1(10,10);
return 0;
}