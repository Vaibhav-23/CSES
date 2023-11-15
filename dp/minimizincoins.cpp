#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> val(n);
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    vector<int> dp(sum+1,1e9);
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(i-val[j]>=0){
                dp[i]=min(dp[i],1+dp[i-val[j]]);
            }
        }
    }
    if(dp[sum]==1e9) cout<<-1<<endl;
    else cout<<dp[sum]<<endl;
}