#include<iostream>
using namespace std;
int main(){
   int a = 10;
   int *ptr = &a;
   cout<<ptr<<" = "<<&a<<endl;
   int **pptr =&ptr;
   cout<<pptr <<"="<<&ptr<<endl;
   return 0;
}