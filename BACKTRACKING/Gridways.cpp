#include<iostream>
using namespace std;
int ways(int r,int c,int m,int n){
    if(r==m-1 && c == n-1){
        return 1;
    }
    if(r>=m || c>= n){
        return 0;
    }
    int v1 = ways(r,c+1,m,n); // right
    int v2 = ways(r+1,c,m,n); // down
    return v1+v2;

}
int main(){
    int m = 3;
    int n = 3;
    cout<<ways(0,0,m,n);
    return 0;
}

