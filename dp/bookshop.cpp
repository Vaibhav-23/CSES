#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> price(n),page(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>page[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int sum=1;sum<=x;sum++){
            int nottake=dp[i-1][sum];
            int take=-1e9;
            if(sum>=price[i-1]){
                take=page[i-1]+dp[i-1][sum-price[i-1]];
            }
            dp[i][sum]=max(take,nottake);
        }
    }
    cout<<dp[n][x]<<endl;
}