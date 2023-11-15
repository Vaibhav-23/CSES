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
    vector<int> dp(sum+1,0);
    dp[0]=1;
    //sort(val.begin(),val.end());
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(i>=val[j]){
                dp[i]=(dp[i]+dp[i-val[j]])%mod;
            }
        }
    }
    cout<<dp[sum]%mod<<endl;
}