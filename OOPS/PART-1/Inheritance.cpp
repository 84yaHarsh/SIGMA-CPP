#include<iostream>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"animals can eat"<<endl;
    }
    void run(){
        cout<<"animals can run"<<endl;
    }
};
class dog: public Animal{
    public:
    int legs;
    void bark(){
        cout<<"dog can bark"<<endl;
    }
};
int main(){
    dog d1;
    d1.bark();
    d1.eat();
    d1.run();
    return 0;

}



