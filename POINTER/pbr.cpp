// PASS BY REFERENCE BY REFERENCE VARIABLE

#include<iostream>
using namespace std;
void change(int &b){  // &b will point to the same memeory location 
     b = 20;
    cout<<b<<endl;
}
int main(){
    int a = 10;
    change(a);
    cout<<a<<endl;
    return 0;
}