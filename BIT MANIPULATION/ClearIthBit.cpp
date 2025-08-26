#include<iostream>
using namespace std;
int ClearIthBit(int num,int i){
    int BitMask = ~(1<<i);
    return (BitMask & num);
}
int main(){
    cout<<ClearIthBit(6,1);
    return 0;
}


