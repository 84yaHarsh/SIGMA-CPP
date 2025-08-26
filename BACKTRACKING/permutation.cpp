// find and print all the permutation of the given string
#include<iostream>
using namespace std;
void permutation(string str,string per){
    if(str.size()==0){
        cout<<per<<" ";
        return ;
    }
    int n = str.size();
   for(int i=0; i<n; i++){
       char ch = str[i];
       string nxtStr = str.substr(0,i)+str.substr(i+1,n);
       permutation(nxtStr,per+ch);
   }
}
int main(){
    string htr = "abc";
    string per = " ";
    permutation(htr,per);
    return 0;
}



