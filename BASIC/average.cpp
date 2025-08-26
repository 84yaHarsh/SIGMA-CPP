#include<iostream>
using namespace std;
int main(){
    int mark1,mark2,mark3;
    cout<<"enter marks1:";
    cin>>mark1;
    cout<<"enter mark2:";
    cin>>mark2;
    cout<<"enter marks3:";
    cin>>mark3;
    float avg = (mark1+mark2+mark3)/3;
    cout<<"average is:"<<avg;
    return 0;
}