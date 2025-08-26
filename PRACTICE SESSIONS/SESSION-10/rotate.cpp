// ROTATE A MATRIX BY 90 DEGREE
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>&v1){
        int n = v1.size();
       for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
             
        cout<<v1[j][i]<<" ";
             
        }
        cout<<endl;
       }
}
int main(){
    vector<vector<int>> v1 = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v1.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<v1[i].size(); j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(v1);
    return 0;
}
