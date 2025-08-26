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
        *mileage = *Original.mileage;
    }
    ~Car(){
        cout<<"deleting obeject"<<endl;
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};
int main(){
 Car c1("porche","black");
 
 cout<<c1.name<<endl;
 cout<<c1.color<<endl;
 cout<<*c1.mileage<<endl;
 return 0;
}


