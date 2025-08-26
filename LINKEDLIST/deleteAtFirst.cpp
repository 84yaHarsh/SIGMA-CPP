


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
 // Deletion of a node at begining
 Node*temp = head;
 if(head!=NULL){
    head = head->next;
    delete temp;
   }

 while(head!=NULL){
  cout<<head->data<<"->";
  head = head->next;
 }
 cout<<"NULL";
    return 0;
}