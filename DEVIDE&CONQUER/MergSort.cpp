#include<iostream>
#include<vector>
using namespace std;
void merg(int arr[],int si,int mid,int ei){
    vector<int>temp;
    int i = si;
    int j = mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    for(int i=si,x=0; i<=ei; i++){
        arr[i] = temp[x++];
    }
}
void printarr(int arr[],int n){
  
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void mergsort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
        int mid = si+(ei-si)/2;
        mergsort(arr,si,mid);
        mergsort(arr,mid+1,ei);
        merg(arr,si,mid,ei);
}
int main(){
    int arr[] = {6,3,7,5,2,4};
    int n =6;
    mergsort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}


