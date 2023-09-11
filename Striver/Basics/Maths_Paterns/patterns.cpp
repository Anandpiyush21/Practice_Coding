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

void pattern7(int n){

/*

   *   
  ***
 *****
*******

*/
    for(int i=0;i<n;i++){
        // Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // Star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        // Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    /*
    
    *******
     *****
      ***
       *
    
    */
    for(int i=0;i<n;i++){

        // Space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // Star
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout<<"*";
        }
        // Space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    
}

void pattern9(int n){

    /*
    
   *   
  ***
 *****
*******
*******
 *****
  ***
   *

    */

    pattern7(n);
    pattern8(n);
}

void pattern10(int n){

    /*
*
**
***
****
***
**
*
    */

    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void pattern11(int n){
/*

1 
0 1
1 0 1
0 1 0 1

*/



    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
/*

1      1
12    21
123  321
12344321

*/



      int space=2*(n-1);
      for(int i=1;i<=n;i++){
        // Numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // Space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        // Numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        space-=2;
        cout<<"\n";
      }
}

void pattern13(int n){

/*

1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

    int pri=1;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pri<<" ";
            pri++;
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
// pattern7(4);
// pattern8(4);
// pattern9(4);
// pattern10(4);
// pattern11(4);
// pattern12(4);
pattern13(5);

return 0;
}