/* Space-Optimised Approach
  

*/

/*  memoized Code
#include<bits/stdc++.h>
using namespace std;
int CL(vector<int>&dp,int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
if(dp[n]!=-1){
    return dp[n];
}
return dp[n] = CL(dp,n-1) + CL(dp,n-2);
}
int main(){
     int n;
     cin>>n;
     vector<int>dp(n+1,-1);
     int ans = CL(dp,n);
     cout<<ans<<endl;
    return 0;
} 
*/

/* tabulation code */
/*
#include<bits/stdc++.h>
using namespace std;
int CL(vector<int>&dp,int n){
    dp[0] = 1;  // nums of ways to climb 0th stair
    dp[1] = 1;  // nums of ways to climb 1th  stair

for(int i=2; i<=n; i++){
    dp[i] = dp[i-1]+dp[i-2];
  }
  return dp[n];
}
int main(){
     int n;
     cin>>n;
     vector<int>dp(n+1,-1);
     int ans = CL(dp,n);
     cout<<ans<<endl;
    return 0;
} */