// FIND TOTAL NUMBER OF WAYS IN WHICH N FRIEND CAN BE PAIRED UP.
// EACH FRIEND CAN ONLY BE PAIRED ONCE
#include<iostream>
using namespace std;
int friendpairing(int n){
    if(n==1 || n==2){
        return n;
    }
    return  friendpairing(n-1) + (n-1)*friendpairing(n-2);
}
int main(){
   cout<< friendpairing(3);
    return 0;
}



