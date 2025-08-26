#include<iostream>
using namespace std;
int tilingProblem(int n){
    if(n==0 || n==1 ){
        return 1;
    }
        //    vertical          horizontal
    return tilingProblem(n-1)+tilingProblem(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<tilingProblem(n);
    return 0;
}


