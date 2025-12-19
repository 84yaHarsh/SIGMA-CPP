/*STACK IMPLEMENTTATION WITHOUT STL */
#include<iostream>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node* next;
  
    Node(int val){
        data = val;
        next = NULL;
    }
};
template<class T>
class Stack{
    public:
     Node<T>* head;
     Stack(){
        head =NULL;
     }
   void push(T val){
      Node<T> *temp = new Node<T>(val);
      if(head==NULL){
        head = temp;
      } else{
           temp->next = head;
           head = temp;
      }
   }
   void pop(){
       Node<T>* temp = head;
       head = head->next;
       temp->next =NULL;
       delete temp;
   }
   T top(){
        return head->data;
   }
   bool isEmpty(){
    return head == NULL ;
   }
};
int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

