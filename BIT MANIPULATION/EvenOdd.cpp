#include<iostream>
using namespace std;
void evenodd(int num){
   if(!(num&1)){
    cout<<"even";
   }
   else{
    cout<<"odd";
   }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    evenodd(n);
    return 0;
}


