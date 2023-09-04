#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){

/*

****
****
****
****

*/

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

void pattern2(int n){

/*

*
**
***
****

*/

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}

}

void pattern3(int n){

/*

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){

    /*
    * * * * * 
    * * * *
    * * *
    * *
    *
    */
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

void pattern6(int n){

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

int main(){

// pattern1(4);
// pattern2(4);
// pattern3(5);
// pattern4(5);
// pattern5(5);
// pattern6(5);
return 0;
}