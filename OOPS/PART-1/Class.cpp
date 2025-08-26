#include<iostream>
using namespace std;
class Student{
    // properties,attributes
    string name;
    float cgpa;
   
    // function/method  
    void getpercentage(){
        cout<<(cgpa*10)<<endl;
    }
};
int main(){
    Student s1 ;   // object
    cout<<sizeof(s1);
    return 0;
}

