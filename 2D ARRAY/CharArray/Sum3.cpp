// VALID PALINDROME
#include<cstring>
#include<iostream>
using namespace std;
bool isPalindrome(char arr[],int n){
  int start =0,end = n-1;
  while(start<end){
    if(arr[start]!=arr[end]){
        return false;
    }
    start++,end--;
  }
  return true;
}
int main(){
    char arr[] = "racecar";
    cout<<isPalindrome(arr,strlen(arr));

    return 0;
}
