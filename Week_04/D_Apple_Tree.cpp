//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

vector<vector<int>>adj;
vector<long long>dp;
 
void dfs(int v, int p) {
    int sz=adj[v].size(), val=adj[v][0];
    if(sz==1 && val==p){
        dp[v]=1;
    }
    else{
        for(auto x:adj[v]){
            if(x!=p){
                dfs(x, v);
                dp[v]=dp[v]+dp[x];
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        adj.assign(n, vector<int>());
        dp.assign(n, 0); n--;
        for(int i=0; i<n; i++){
            int u, v;
            cin>>u>>v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0, -1);
        int q; cin>>q;
        while(q--){
            int a,b; cin>>a>>b;
            a--; b--;
            cout<<dp[a]*dp[b]<<'\n';
        }
    }
    
    return maru
}