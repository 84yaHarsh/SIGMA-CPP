#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;
    cout<<vec1.size()<<endl;
    vector <int> vec2 = {1,2,3,4,5,6};
    vector<int> vec3(10,2); // 2 2 2 2 2 2 2 2 2 2
    for(int i=0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }
   
    return 0;
}

