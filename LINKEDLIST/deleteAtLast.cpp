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
Node* CreateNode(int arr[],int index,int size){
       if(index == size){
        return NULL;
       }
       Node*temp = new Node(arr[index]);
       temp->next = CreateNode(arr,index+1,size);
       return temp;
    }
int main(){
 Node* head = NULL;
 int arr[] = {2,4,6,8};
 int n = sizeof(arr)/sizeof(int);
 head = CreateNode(arr,0,n);

// Deletion of a node at last
  
// case:1 if linkedlist is empty
if(head==NULL){
    cout<<"LinkedListb is empty"<<endl;
}
// case 2: only one node is present
else if(head->next==NULL){
   delete head;
   head = NULL;
}
// case 3: more than 1 node is present
else{
    Node*curr = NULL;
    Node*temp = head;
       while(temp->next!=NULL){
         curr = temp;
         temp= temp->next;
       }
       delete temp;
       curr->next = NULL;
}
// print the linkedlist

 while(head!=NULL){
  cout<<head->data<<"->";
  head = head->next;
 }
 cout<<"NULL";
    return 0;
}


