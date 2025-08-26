//PRINT PRIME NUM IN A RANGE
#include<iostream>
using namespace std;
bool isprime(int n){
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
void allprime(int n){
    for(int i=2; i<=n; i++){
     if(isprime(i)){
        cout<<i;
     }
     cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
   allprime(n);
   return 0;
}