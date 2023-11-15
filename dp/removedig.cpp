#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        for(auto &it : s){
            int dig=it-'0';
            if(dig) dp[i]=min(dp[i],1+dp[i-dig]);
        }
    }
    cout<<dp[n]<<endl;
}