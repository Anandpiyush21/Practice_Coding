#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_div1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void print_div2(int n){
    vector <int> ll;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ll.push_back(i);
            if(n/i != i){
                ll.push_back(n/i);
            }
        }
    }
    sort(ll.begin(),ll.end());
    for(unsigned int i=0;i<ll.size();i++){
        cout<<ll[i]<<" ";
    }
    cout<<endl;
}

int main(){

print_div1(36);
print_div2(36);
return 0;
}