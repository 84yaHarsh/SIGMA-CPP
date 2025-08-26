#include<iostream>
#include<vector>
using namespace std;
int lastOccure(vector<int>&v1,int i,int target){
    if(i<0){
        return -1;
    }
    if(v1[i]==target){
        return i;
    }
    return lastOccure(v1,i-1,target);
}
int main(){
    vector<int> v1 = {1,2,3,3,3,3,5};
    int i=0; 
    int n = v1.size();
    cout<<lastOccure(v1,n-1,3);
    return 0;
}
