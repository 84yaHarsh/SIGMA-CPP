// STACK IMPLEENTATION USING VECTOR CLASS TEMPLATE
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
template <class T>
class Stack {
    vector<int>v;
    public:
    void push(int val){
       v.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return ;
        }
        v.pop_back();
    }
    T top(){
        // if(isEmpty()){
        //     cout<<"stack is empty"<<endl;
        //     return -1;
        // }
        int lastIdx = v.size()-1;
        return v[lastIdx];
    }
    bool isEmpty(){
        return v.size()==0;
    }
};

int main(){
    Stack <char> s;  
    s.push('a');
    s.push('b');
    s.push('c');
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
