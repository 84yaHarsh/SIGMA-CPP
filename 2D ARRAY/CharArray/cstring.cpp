#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char arr[100];
    // arr = "HARSHCHAURASIA";    we cant store sttring literals value in to char array
    strcpy(arr,"harsh");
    cout<<arr<<endl;

    char str1[100] = "harsh ";
    char str2[100] = "chaurasia";
    strcat(str1,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;

    cout<<strcmp(str1,str2);  // str2>str1 --> +ve answer  ,  str1>str2 ---> -ve answer ,   str1 == str2  --> 0 answer
    return 0;
}

