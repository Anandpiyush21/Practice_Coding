#include <stdio.h>

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
        printf(" ");
        }
        // Star
        for(int j=0;j<2*i+1;j++){
            
        
        }
        

        // Space
        for(int j=0;j<n-i-1;j++){
        printf(" ");
        }
    printf("\n");
    }
}
int main(){
    pattern7(4);
}