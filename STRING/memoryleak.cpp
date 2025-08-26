#include<iostream>
using namespace std;
 void funcArr(){
    int *ptr = new int;
       *ptr = 1;
       cout<<*ptr<<" ";
       delete ptr;
 }
int main(){
    funcArr();
    return 0;
}

