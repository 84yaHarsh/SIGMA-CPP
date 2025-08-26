#include<iostream>
using namespace std;
void decToBin(int decNum){
    int n = decNum;
    int binNum =0;
    int pow = 1; // 10^0 10^1 10^2
    while(n>0){
        int rem = n%2;
        binNum+=rem*pow;
        n /=2;
        pow*=10;
    }
    cout<<binNum;
    
}
int main(){
    decToBin(10);
    return 0;
}