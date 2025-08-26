// insert a node at the begining of the list using recursion
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
Node* insertAtBegining(int arr[],int size){
       if(size<0){
        return NULL;
       }
       Node*temp = new Node(arr[size]);
       temp->next = insertAtBegining(arr,size-1);
       return temp;
    }
int main(){
 Node* head = NULL;
 int arr[] = {2,4,6,8};
 int n = sizeof(arr)/sizeof(int);
 head = insertAtBegining(arr,n-1);
 while(head!=NULL){
  cout<<head->data<<"->";
  head = head->next;
 }
 cout<<"NULL";
    return 0;
}


