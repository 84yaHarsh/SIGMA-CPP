// count set bit

#include<iostream>
using namespace std;

int main(){
       int num;
       cin>>num;
       int n = num;
       int count=0;
       while(n>0){
           int lastdigit = n & 1;
            count+=lastdigit;
            n =  n>>1; 
       }
       cout<<count;
     
     return 0;
}

