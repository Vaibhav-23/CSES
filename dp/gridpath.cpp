#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            if(c=='*') grid[i][j]=1;
        }
    }
    vector<vector<int>>dp(n,vector<int>(n,0));
    if(!grid[0][0]) dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) continue;
            if(!grid[i][j]){
                if(i) dp[i][j]+=dp[i-1][j]%mod;
                if(j) dp[i][j]+=dp[i][j-1]%mod;
            }
        }
    }
    cout<<dp[n-1][n-1]%mod<<endl;
}