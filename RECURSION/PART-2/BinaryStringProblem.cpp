#include<iostream>
using namespace std;
void binString(int n,string ans){
    if(n==0){
        cout<<ans<<" ";
        return ;
    }
    if(ans.empty()){
        binString(n-1,ans+'0');
        binString(n-1,ans+'1');
    }
    else if(ans[ans.size()-1]!='1'){
        binString(n-1,ans+'0');
        binString(n-1,ans+'1');
    }
    else{
        binString(n-1,ans+'0');
    }
}
int main(){
    string ans="";
    binString(3,ans);
    return 0;
}

