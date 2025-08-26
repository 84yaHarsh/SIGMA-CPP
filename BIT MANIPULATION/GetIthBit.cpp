// GET ITH BIT
#include<iostream>
using namespace std;
int GetIthBit(int num,int i){
    int Bitmask = num>>i;
    return (Bitmask&1);
}
int main(){
    int n,i;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter i:";
    cin>>i;
    cout<<GetIthBit(n,i);
    return 0;
    
}

