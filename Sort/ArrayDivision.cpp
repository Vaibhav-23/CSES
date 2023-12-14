#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int low=0,high=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        low=min(low,arr[i]);
        high+=arr[i];
    }
    int res;
    while(low<=high){
        int mid=(low+high)/2;
        
    }
}