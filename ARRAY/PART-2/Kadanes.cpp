// KADANES ALGORITHM 
// T.C ->O(N)
#include<iostream>
#include<climits>
using namespace std;
void kadane(int *arr,int n){
    int maxSum = INT_MIN;
    int currSum =0;
    for(int i=0; i<n; i++){
      currSum+=arr[i];
    maxSum = max(currSum,maxSum);
      if(currSum <0){
        currSum =0;
      }
    }
    cout<<"Max sum is:"<<maxSum;
}
int main(){
    int arr[] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    kadane(arr,n);
    return 0;
}

