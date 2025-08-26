// pair with given difference
#include<iostream>
#include<vector>
using namespace std;
  vector<int> pairDifference(vector<int>&v1,int target){
    int n = v1.size();
    int start =0, end = start+1;
    while(end<n){
        int diff = abs(v1[start]-v1[end]);
            if(diff==target){
                return {v1[start],v1[end]};
            }
            else if(diff>target){
                start++;
            }
            else{
                end++;
            
        }
    }
    return {};
  }
int main(){
    vector<int> v1 = {2,3,5,10,50,80};
    
    vector<int> v2 = pairDifference(v1,45);
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}

