//REVERSE A CHAR ARRAY
#include<iostream>
#include<cstring>
using namespace std;
void reverse(char arr[],int n){
    for(int i=0; i<n/2; i++){
         swap(arr[i],arr[n-i-1]);
        // char temp = arr[i];
        // arr[i] = arr[n-i-1];
        // arr[n-i-1] = temp;
    }

}
int main(){
    char arr[] = "HIMADRI";
    reverse(arr,strlen(arr));
    cout<<arr;
    return 0;
}

