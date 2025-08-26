/*  SEARCHING IN SORTED MATRIX
T.C--> O(n*m)
#include<iostream>
using namespace std;
bool Diagonal(int arr[][4],int n,int m,int key){
   for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
        if(arr[i][j]==key){
            return true;
        }
     }
   }
  cout<<"key is not found";
  return false;
}
int main(){
    int key = 15;
    int arr[4][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}
                    };

  cout<<Diagonal(arr,4,4,key);
  return 0;
}
  */
 // T.C -> o(m+n)
 #include<iostream>
 using namespace std;
 bool Search(int arr[][4],int m,int n ,int key){
    int i = 0,j = n-1;
    while(i<m && j>=0){
        if(arr[i][j]==key){
         cout<<"found at cell ("<<i<<","<<j<<")\n";
         return true;
        } else if(arr[i][j]>key){
            j--;
        }
        else{
           i++ ;
        }
    }
    cout<<"key not found\n";
    return false;
 }
 int main(){
    int key = 37;
    int matrix[][4] = {{10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50}
                       };
  Search(matrix,4,4,key);
  }

