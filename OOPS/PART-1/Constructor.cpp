#include<iostream>
using namespace std;
class Student{
    string name;
    int rno;
    public :
    Student(string nameval,int roll){
       cout<<"constructor is created ,objet is created"<<endl;
       name = nameval;
       rno =  roll;
    }
    // getter
    string getName(){
        return name;
    }
    int getRno(){
        return rno;
    }
};
int main(){
    Student s1("Harsh",138);
    cout<<s1.getName()<<endl;
    cout<<s1.getRno()<<endl;
    return 0;
}

