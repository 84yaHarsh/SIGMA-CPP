/* FIND OUT INPUT CHARECTER IS UPPERCASE OR LOWERCASE*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter charecter:";
    cin>>ch;
    if(ch>='a'  && ch<= 'z'){
        cout<<"lowercase";
    }
    else{
        cout<<"uppercase";
    }
    return 0;
}