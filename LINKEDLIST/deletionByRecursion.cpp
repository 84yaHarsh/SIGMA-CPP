// delete a node at perticular position in a linkedlist using recursion
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
   Node* deleteNode(Node* Curr,int x){
       if(x==1){
           Node*temp = Curr->next;
           delete Curr;
           return temp;
       }
       Curr->next = deleteNode(Curr->next,x-1);
       return Curr;
   }

int main(){
    Node*head = NULL;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    head = CreateNode(arr,0,n);
  
    int x = 3;
   
    head = deleteNode(head,x);
      // print the linkedlist
      while(head!=NULL){
          cout<<head->data<<"->";
          head = head->next;
      }
      cout<<"NULL"<<endl;
    return 0;
}


