// print number in dreacresing order using recursion

#include<iostream>
using namespace std;
void num(int n){
    if(n==0){
       return;
    }
    else{
        cout<<n<<" ";
        num(n-1);
    }
}
int main(){
    num(10);
    return 0;
}


