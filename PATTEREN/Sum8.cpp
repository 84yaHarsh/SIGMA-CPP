/*   1 
     1 2
     1 2 3 
     1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        int num =1;
        for(int j=0; j<=i; j++){
         cout<<num<<" ";
         num+=1;
        }
        cout<<endl;
    }
    return 0;
}