#include<iostream>
using namespace std;
  bool powOfTwo(int n){
    if(!(n &n-1)){
        return true;    // if(!(nonzero)) -->false value so it will not execute
    }
    else{
        return false;
    }
  }
int main(){
    powOfTwo(16);
    powOfTwo(13);
    powOfTwo(14);
    powOfTwo(11);
    return 0;
}

