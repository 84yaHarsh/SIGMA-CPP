#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char work[] ={'c','o','d','e','\0'};
    // char work[5] = {'c','o','d','e','\0'};
    // char work[5] = "code";
    // char work[] = "code";
    cout<<work<<endl;
    cout<<strlen(work)<<endl;
    return 0;
}
