#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7; //getting tle if not declared as const

int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> val(n);
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }

    for(int i=n-1;i>=0;i--){
        for(int s=1;s<=sum;s++){
            int nottake=dp[i+1][s];
            int take=0;
            if(s>=val[i]){
                take=dp[i][s-val[i]];
            }
            dp[i][s]=(take+nottake)%mod;
        }
    }
    cout<<dp[0][sum]%mod<<endl;
}