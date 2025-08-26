#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"animals can eat"<<endl;
  }
  void sleep(){
    cout<<"animals can sleep"<<endl;
  }
};
class goat:public Animal{
    public:
    void voice(){
        cout<< "goat can speak like mememe"<<endl;
    }
};
class cat:public goat{
  public:
  void jump(){
    cout<<"cat can jump"<<endl;
  }
};

int main(){
    cat c1;
    c1.jump();
    c1.voice();
    c1.sleep();
    c1.eat();
    return 0;
}



