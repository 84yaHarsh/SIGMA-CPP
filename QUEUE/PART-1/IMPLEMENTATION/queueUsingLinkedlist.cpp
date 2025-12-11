/*queue using linkedlist */
#include<iostream>
using namespace std;
class Node{
    public:
       int data;
       Node*next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class queue{
    Node*head;
    Node*tail;
    public:
    queue(){
        head = tail = NULL;
    }
    void push(int data){
       Node* firstNode = new Node(data);
       if(head == NULL){
           head = tail = firstNode;
       }
       else{
           tail->next = firstNode;
           tail = firstNode;
       }
    }
    void pop(){
        if(empty()){
            cout<<"queue is empty"<<endl;
        }
         Node*temp = head;
         head = head->next;
         delete temp ;

    }
    int front(){
        if(empty()){
            cout<<"queue is empty"<<endl;
        }
       return head->data;
    }
    bool empty(){
        return head == NULL;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}