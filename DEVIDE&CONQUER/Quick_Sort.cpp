#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot = arr[ei];
    int i=si-1;
    for(int j=si; j<ei; j++){
       if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
       }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
void quick_sort(int arr[],int si,int ei){
    if(si<ei){
        return ;
    int pIdx = partition(arr,si,ei);
    quick_sort(arr,si,pIdx-1);
    quick_sort(arr,pIdx+1,ei);
      }
    }
   
int main(){
  int arr[] = {6,3,7,5,2,4};
  int n = sizeof(arr)/sizeof(int);
  quick_sort(arr,0,n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}


