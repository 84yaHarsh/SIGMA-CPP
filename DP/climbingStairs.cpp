/* memoization (TOP-DOWN APPROACH)
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n,vector<int>&dp){
    if(n<=2){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] =  climbStairs(n-1,dp) +  climbStairs(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans = climbStairs(n,dp);
    cout<<ans;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int fibbo(vector<int>&dp,int n){

          dp[0] = 0;
          dp[1] = 1;
    
  for(int i=2; i<=n; i++){
    dp[i] = dp[i-1]+dp[i-2];
  }
  return dp[n];
}
int main(){
    int n ;
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans = fibbo(dp,n);
    cout<<ans<<endl;
    return 0;
}