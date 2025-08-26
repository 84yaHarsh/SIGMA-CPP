#include<iostream>
using namespace std;
void fastexpo(int x,int n){
    int ans = 1;
    while(n!=0){
        int ld = n&1;
        if(ld){
            ans = ans*x;
        }
        x =x*x;
        n = n>>1;
    }
    cout<<ans;
}
int main(){
    fastexpo(5,3);
    return 0;
}


