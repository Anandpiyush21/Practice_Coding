#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int brute_gcd1(int n,int m){
    int minn=min(n,m);
    int gcd=1;
    for(int i=1;i<=minn;i++){
        if(n%i==0 && m%i==0)
        gcd=i;
    }
    return gcd;
}

int brute_gcd2(int n,int m){
    int minn = min(m,n);
    int gcd=1;
    for(int i=minn; i>=1 ; i++){
        if(m%i==0 && n%i == 0 ){
            gcd=i;
        }
    }
    return gcd;
}

int euclidean_algo(int a, int b) {
    b=max(a,b);
    a=min(a,b);
	if (b == 0) {
		return a;
	}
	return euclidean_algo(b, a % b);
}

int main(){

cout<<brute_gcd1(20,40)<<endl;
cout<<brute_gcd1(13,40)<<endl;

cout<<brute_gcd2(20,40)<<endl;
cout<<brute_gcd2(13,40)<<endl;

cout<<euclidean_algo(20,40)<<endl;
cout<<euclidean_algo(40,13)<<endl;

return 0;
}