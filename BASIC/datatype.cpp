#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 5;
    float cgpa = 8.5;
    bool isadult = true;
    double num = 83.333333333;
    char name = 'a';

    float c = 87.79382467458;  // print same til  7 digit of decimal 
    double d = 76.89236804738964078;  // print same till 15 digit of decimal
    cout<<"size of int="<<sizeof(int)<<endl;
    cout<<"size of float="<<sizeof(float)<<endl;
    cout<<"size of bool="<<sizeof(bool)<<endl;
    cout<<"size of double="<<sizeof(double)<<endl;
    cout<<"size of char="<<sizeof(char)<<endl;

    cout<<setprecision(15)<<"c ="<<c;
    cout<<setprecision(15)<<"\nd ="<<d;
    return 0;
}