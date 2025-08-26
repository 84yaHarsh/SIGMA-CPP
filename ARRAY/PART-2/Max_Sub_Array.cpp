// MAX SUBARRAY(BRUTE-FORCE)
#include<climits>
#include<iostream>
using namespace std;
   void Sub_Array(int *arr,int n){
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
       for(int j=i; j<n; j++){
        int currSum =0;
         for(int k=i; k<=j; k++){
            currSum+=arr[k];
         }
         cout<<currSum<<" ";
         maxSum = max(currSum,maxSum);
        }
        cout<<endl;
    }
    cout<<"maxSubarray sum is:"<<maxSum;
   }
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    Sub_Array(arr,n);
    return 0;
}