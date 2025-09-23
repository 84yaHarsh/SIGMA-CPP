// STACK IMPLEENTATION USING VECTOR
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
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
    int top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        int lastIdx = v.size()-1;
        return v[lastIdx];
    }
    bool isEmpty(){
        return v.size()==0;
    }
};

int main(){
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
