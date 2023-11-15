#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=6;k++){
            if(k<=i) dp[i]=(dp[i]+dp[i-k])%mod;
        }
    }
    cout<<dp[n]%mod<<endl;
}
