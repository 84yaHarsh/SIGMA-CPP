#include<iostream>
using namespace std;
class Car{  public:
    string name;
    string color;
    int*mileage;
    Car(string name_val,string color_val){
        this->name = name_val;
        this->color = color_val;
        mileage = new int; // dynamically memory allocated
        *mileage = 12;
    }
    Car(Car &Original){
        name = Original.name;
        color = Original.color;
        mileage = Original.mileage;
    }
};
int main(){
 Car c1("porche","black");
 Car c2(c1);
 cout<<c2.name<<endl;
 cout<<c2.color<<endl;
 cout<<*c2.mileage<<endl;
 *(c2.mileage) = 10;
 cout<<*(c1.mileage);
 return 0;
}
  






