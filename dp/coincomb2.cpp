#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7; //getting tle if not declared as const
int solve(int ind,int sum, vector<vector<int>> &dp,vector<int>&val){
    int n=val.size();
    if(sum==0) return 1;
    if(ind>=n) return 0;
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    int nottake=solve(ind+1,sum,dp,val);
    int take=0;
    if(sum>=val[ind]) take=solve(ind,sum-val[ind],dp,val);
    return dp[ind][sum]=(take+nottake)%mod;
}
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> val(n);
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
    cout<<solve(0,sum,dp,val)%mod<<endl;
}