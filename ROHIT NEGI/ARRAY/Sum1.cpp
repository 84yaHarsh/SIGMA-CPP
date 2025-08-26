// SEGREGATE 0'S AND 1'S
/*#include<iostream>
#include<vector>
using namespace std;
void segregate(vector<int> &v1){
    int n = v1.size();
    int start =0,end = n-1;
    while(start<end){
        if(v1[start]==0){
            start++;
        }
        else{
            if(v1[end]==0){
                swap(v1[start],v1[end]);
                start++,end--;
            }
            else{
                end--;
            }
        }
    }
}
int main(){
   vector<int> v1 = {1,0,1,0,1,0};
   segregate(v1);
     for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
     }
   return 0;
}*/
#include<iostream>
#include<vector>
using namespace std;
void segregate(vector<int> &v1){
    int count_0 = 0,count_1 = 0;
    int n = v1.size();
    for(int i=0; i<n; i++){
        if(v1[i]==0){
            count_0++;
        }
    }  
    for(int i=0; i<n; i++){
        if(v1[i]==1){
            count_1++;
        }
    }
      for(int i=0; i<count_0; i++){
        cout<<0<<" ";
      }  
      for(int i = count_0; i<count_0+count_1; i++){
        cout<<1<<" ";
      }
    }
int main(){
   vector<int> v1 = {1,0,1,0,1,0};
   segregate(v1);
   return 0;
}

