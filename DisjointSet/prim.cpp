#include<bits/stdc++.h>
class Solution{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	typedef pair<int,int> pi;
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        vector<int> vis(V,0);
        pq.push({0,0});
        int sum=0;
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int wt=temp.first,node=temp.second;
            if(vis[node]) continue;
            vis[node]=1;
            sum+=wt;
            for(auto &it : adj[node]){
                if(!vis[it[0]]){
                    pq.push({it[1],it[0]});
                }
            }
        }
        return sum;
    }
};

