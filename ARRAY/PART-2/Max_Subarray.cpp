#include<iostream>
#include<climits>
using namespace std;
void max_SubArray(int *arr,int n){
    int maxSum = INT_MIN;
  
    for(int i=0; i<n; i++){   // 2
        int curr_Sum =0;
        for(int j=i; j<n; j++){   // 2 -1 6 -5 4 2 
            curr_Sum+=arr[j];
            maxSum = max(maxSum,curr_Sum);
        }
        cout<<endl;
    }
    cout<<"max sum is:"<<maxSum;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    max_SubArray(arr,n);
}

