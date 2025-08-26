//O(N^3)
// PRINT ALL SUBARRAY
#include<iostream>
using namespace std;
   void Sub_Array(int arr[],int n){
    for(int i=0; i<n; i++){
       for(int j=i; j<n; j++){
         for(int k=i; k<j; k++){
            cout<<arr[k]<<" ";
         }
         cout<<"\n";
        }
    }
   }
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    Sub_Array(arr,n);
    return 0;
}


