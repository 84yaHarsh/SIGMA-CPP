#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;
};
class Teacher{
    public:
    string subject;
    float salary;
};
class TA : public Student ,public Teacher{
    public:
    string name;
};
int main(){
    TA t1;
    t1.name = "harsh chaurasia";
    t1.subject = "cpp";
    t1.cgpa = 8.9;
    t1.salary = 1.6;
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl ;
    cout<<t1.cgpa <<endl;
    cout<<t1.salary<<endl ;
    return 0;
}


