#include<iostream>
using namespace std;
void result(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    result(n);
    return 0;
}