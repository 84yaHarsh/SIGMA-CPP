#include<iostream>
using namespace std;
 void sayhello(){
    cout<<"hello";
 }
 void saybye(){
    cout<<"bye"<<endl;;
    sayhello();
 }

int main(){
   saybye();
   return 0;
}