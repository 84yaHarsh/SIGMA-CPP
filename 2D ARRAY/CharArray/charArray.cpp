#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter trhe size of array:";
    cin>>n;
    char str[n];   // char str[5] = {'a','b','c','d','e'};
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }
    return 0;
}

