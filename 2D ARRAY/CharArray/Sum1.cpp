// CONVERT ALL THE LETTERS IN TO CAPITAL
#include<cstring>
#include<iostream>
using namespace std;
void capital(char arr[],int n){
    for(int i=0; i<n; i++){
        char ch = arr[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            arr[i] = ch-'a'+'A';
        }
    }
    cout<<arr;
}
int main(){
    char word[] = "aPpLe";
    capital(word,strlen(word));
    return 0;
}


