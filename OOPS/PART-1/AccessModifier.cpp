#include<iostream>
using namespace std;
class Student{
    public:     // we have to write public for access it outside the class bcoz its bydefault private
     string name;
     float cgpa;
     void getpercentage(){
         cout<<(cgpa*10)<<endl;
     }
};

int main(){
    Student s1;
    s1.name = "harsh";
    s1.cgpa = 8.5;
    cout<<s1.name<<"\n";
    s1.getpercentage();
    return 0;
}



