#include<iostream>
using namespace std;
bool isSort(int arr[],int i,int n){
       if(i==n-1){
        return true;
       }
       if(arr[i]>arr[i+1]){
        return false;
       }
       return isSort(arr,i+1,n);
}
int main(){
    int arr[] = {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(int);
    int i=0;
    cout<<isSort(arr,i,n);
    return 0;
}