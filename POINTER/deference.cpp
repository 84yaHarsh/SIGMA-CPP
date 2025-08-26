/* Deference operator(*) -> it is used for get the value of the variable pointed by the pointer */

#include<iostream>
using namespace std;
int main(){
int a = 10; 
int *ptr = &a;
cout<<*(&a)<<"="<<*ptr<<endl;
return 0;
}