#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
    for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"\n";
}
}

void selection_sort(int arr[],int n){
    
    for(int i=0;i<=n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            // Find out the minimum in each iteration
            if(arr[j]<arr[mini]){
                mini=j;
            }
            
        }
        swap(arr[mini],arr[i]);
    }
}

void insertion_sort(int arr[],int n){
    

}

int main(){
int arr[]={7,5,6,8,52,15,22,444,88};
int n= sizeof(arr)/sizeof(arr[0]);
// bubble_sort(arr,n);
// selection_sort(arr,n);
print_arr(arr,n);

return 0;
}