//Insert at element at Last
// Insertion at beginning
// 2->4->6->->8->NULL
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
       data = value;
       next = NULL;
    }
};
int main(){
    int n,value;
    Node*head = NULL;
    cout<<"enter how much data item you want to insert:";
    cin>>n;
    // Insert the node at last
    for(int i=0; i<n; i++){
        cin>>value;
    // if linkedlist does not exist
      if(head==NULL){
        head = new Node(value);
    }
    // if linkedlist exist
   else{
        Node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
     tail->next = new Node(value);
   }
}
   
    // Print the value
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
        cout<<"NULL";
    return 0;
}
/*
second method if head & tail both are NULL
int main(){
int n,value;
Node*head,tail = NULL;
cout<<" enter the data item you want ot insert";
for(int i=0; i<n; i++)
  {
     cin>>value;
   if(head ==NULL){
        head = new Node(value);
        tail = head;
    }
  else{
     
    tail->next = new node(value);
    tail = tail->next;
  }
}





*/





