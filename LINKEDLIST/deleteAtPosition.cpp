// delete a node at perticular position in a linkedlist
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
Node* CreateNode(int arr[],int index,int size){
    if(index ==size){
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->next = CreateNode(arr,index+1,size);
    return temp;
}

int main(){
    Node*head = NULL;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    head = CreateNode(arr,0,n);
  
    int x = 3;
   
   // case 1:if Linkedlist doesnot exist
      
      if(head==NULL){
          cout<<"linkedlist doesnot exist"<<endl;
      }
      // case 2: if only one node is present
      else if(x==1){
           Node* temp = head;;
           head = head->next;
           delete temp;
      }
   // case 3: if more then one node is present in linkedlist
      else{
            Node*curr = head;
            Node*prev = NULL;
          for(int i=1; i<x && curr!=NULL; i++){
             prev = curr;
             curr = curr->next;
          }
          prev->next = curr->next;
          delete curr;
      }
      // print the linkedlist
      while(head!=NULL){
          cout<<head->data<<"->";
          head = head->next;
      }
      cout<<"NULL"<<endl;
    return 0;
}
