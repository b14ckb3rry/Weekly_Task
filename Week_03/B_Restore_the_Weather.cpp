//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    vector<pair<int, int>>v(n);
    vector<int>v2(n); vector<int>res(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v2[i]=x;
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    for(int i=0; i<n; i++){
        res[v[i].second]=v2[i];
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<' ';
    }
    cout<<'\n';
    }
    
    return maru
}