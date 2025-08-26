// PRINT SPIRAL MATRIX
#include<iostream>
using namespace std;
void Mat(int arr[][4],int m ,int n){
  int sRow =0,sCol =0;
  int eRow =m-1, eCol = n-1;
  while(sRow<=eRow && sCol<=eCol){
    //TOP
  for(int j=sCol; j<=eCol; j++){
    cout<< arr[sRow][j]<<" ";
  }
  // RIGHT
  for(int i=sRow+1; i<=eRow; i++){
    cout<<arr[i][eCol]<<" ";
  }
  // BOTTOM
  for(int j =eCol-1; j>=sCol; j--){
    if(sRow==eRow){
        break;
    }
    cout<<arr[eRow][j]<<" ";
  }
  // LEFT
  for(int i=eRow-1; i>=sRow+1; i--){
    if(sCol==eCol){
        break;
    }
    cout<<arr[i][sCol]<<" ";
  }
  sRow++,eRow--;
  sCol++,eCol--;
  }
  

}
int main(){
    int arr[4][4] ={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16} };
  Mat(arr,4,4);
  return 0;
}


