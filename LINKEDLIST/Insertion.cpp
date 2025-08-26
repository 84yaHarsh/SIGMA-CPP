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
    // Insert the node at beginning
    for(int i=0; i<n; i++){
        cin>>value;
    // if linkedlist does not exist
      if(head==NULL){
        head = new Node(value);
    }
    // if linkedlist exist
    else{
        Node*temp = new Node(value);
        temp->next = head;
        head = temp;
     }
    }
    //insert at Last
    Node*Temp = head;
    while(Temp->next!=NULL){
        Temp = Temp->next;
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


