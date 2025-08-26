#include<iostream>
using namespace std;
class  Animal{
    public:
    void eat(){
        cout<<"eats"<<endl;
    }
    void breath(){
        cout<<"animals can breath"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"dogs can bark"<<endl;
    }
  void run(){
    cout<<"dogs can run"<<endl;
  }  
};
class Cat : public Animal{
    public:
   void jump(){
     cout<<"cats can jump"<<endl;
   }
};
int main(){
    Cat c1;
    c1.jump();
    c1.breath();
    Dog d1;
    d1.bark();
    d1.eat();
    return 0;
}



