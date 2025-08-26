
// PRIME OR NOT
#include<iostream>
using namespace std;
bool  isprime1(int n){
    if(n==1){
        return false;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}
bool isprime2(int n){
   if(n==1){
    return false;
   }
   for(int i=2; i*i<=n; i++){
    if(n%i==0){
        return false;
    }

    }
   return true;
}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    cout<<isprime1(n)<<endl;;
    cout<<isprime2(n)<<endl;
    return 0;
}