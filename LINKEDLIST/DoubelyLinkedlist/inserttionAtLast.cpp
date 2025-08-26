#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main(){
    Node*head = NULL;
    int n,value;
    cout<<"enter how many data items you want to insert:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>value;
        if(head==NULL){
        head = new Node(value);
    }
    else{
         Node*temp = head;
         while(temp->next!=NULL){
            temp = temp->next;
         }
         Node*tail = new Node(value);
         temp->next = tail;
         tail->prev = temp;
         tail->next =NULL;
        }
    }
    
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
       }
    cout<<"NULL"<<endl;
return 0;
}




