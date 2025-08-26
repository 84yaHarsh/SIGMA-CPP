// LARGEST ELEMENT  IN AN ARRAY
#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
        max = arr[i]; 
    }  
 }
return max;
 }
int main(){
    int arr[] ={1,3,2,7,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<largest(arr,n);
}