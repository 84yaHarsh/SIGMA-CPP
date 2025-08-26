#include<iostream>
using namespace std;
class car{
    public:
     string name;
     string color;
     car(string nameval,string colval){
        this->name = nameval;
        this->color = colval;
     }
};
int main(){
    car c1("mercedes","black");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;
}


