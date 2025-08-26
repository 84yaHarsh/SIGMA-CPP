// PAIR SUM LEETCODE -167
// T.C->O(N)  
// S.C->O(1)
#include<iostream>
#include<vector>
using namespace std;
  vector<int> pairSum(vector<int>&arr,int target){
        int st=0,end =arr.size()-1;
        int currSum =0;
        vector<int> ans ;
        while(st<end){
            currSum = arr[st]+arr[end];
            if(currSum ==target){
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
            else if(currSum>target){
                end--;
            }
            else{
                st++;
            }
            
        }
        return ans;
  }
int main(){
    int target;
    cout<<"enter target:";
    cin>>target;
    vector<int> vec = {2,7,11,15};
    vector<int> res = pairSum(vec,target);
    if(!res.empty()){
        cout<<"["<<res[0]<<","<<res[1]<<"]";
    }
    else{
        cout<<"no found";
    }
       return 0;
    }
  
