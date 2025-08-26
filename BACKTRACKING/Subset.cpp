#include<iostream>
using namespace std;
void printSubset(string gtr,string subset){
    if(gtr.size()==0){
        cout<<subset<<" ";
        return ;
    }
    char ch = gtr[0];
    //yes
    printSubset(gtr.substr(1,gtr.size()-1),subset+ch);

    //no
    printSubset(gtr.substr(1,gtr.size()-1),subset);
}
int main(){
    string subset = "";
    string gtr = "abc";
    printSubset(gtr,subset);
    return 0;
}


