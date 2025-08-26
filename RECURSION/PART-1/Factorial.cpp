#include<iostream>
using namespace std;
  

int func(int n){
    if(n==0){
        return 1;
    }
   return n*func(n-1);
}
int main(){
    func(5);
    return 0;
}


