// FIRST OCCURENCE OF A ELEMENT
#include<iostream>
#include<vector>
using namespace std;
int FirstOccur(vector<int> &v1,int i,int target){
    int n = v1.size();
    if(v1[i]==target){
        return i;
    }
    if(i==n-1){
        return -1 ;
    }
    return FirstOccur(v1,i+1,target);
   
}
int main(){
    vector<int> v1 = {1,2,3,3,5};
    int n = v1.size();
    cout<<FirstOccur(v1,0,3);
   return 0;
}


