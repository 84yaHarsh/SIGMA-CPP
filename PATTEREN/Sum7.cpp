/* A 
   B B 
   C C C 
   D D D D
*/

#include<iostream>
using namespace std;
int  main(){
    int n =4;
    char ch ='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
    ch+=1;
    cout<<endl;
    }
}