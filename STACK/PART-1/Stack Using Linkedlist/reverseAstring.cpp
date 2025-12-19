/*REVERSE A STRING USING STACK
T.C->O(N) S.C->O(N)*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverseString(stack<char>&s,string str){
    string ans;
    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char temp = s.top();
        ans+=temp;
        s.pop();
    }
    return ans;
}
int main(){
    stack<char>s;
    string str = "abcd";
    
    cout<<"reverse string :"<<reverseString(s,str);
    return 0;
}