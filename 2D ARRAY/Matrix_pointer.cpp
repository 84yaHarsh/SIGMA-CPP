#include<iostream>
using namespace std;
void mat(int arr[][4]){
    cout<<*(*(arr+2) + 2)<<endl;
}
int main(){
    int arr[4][4] = {{1,2,3,4},
                      {3,4,5,6},
                      {7,8,9,10}};
  mat(arr);
}


