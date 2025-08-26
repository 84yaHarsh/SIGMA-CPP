#include<iostream>
using namespace std;
class Instagram{
    string id;
    int Password;
    public:
    string Username;

    Instagram(string Id){
        this->id = Id;
        
    }
    int setpassword(int pass){
        this->Password = pass;
    }
    int getpassword(){
        return Password;
    }
};
int main(){
    Instagram i("84ya_harsh");
    i.Username = "Harsh chaurasia";
    i.setpassword(123);
    cout<<i.getpassword()<<endl;
    return 0;
}


