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
    map<int, int>mp;
    while(t--){
        int val; cin>>val;
        mp[val]++;
    }
    int res;
    for(auto it:mp){
        if(it.second==1){
            res=it.first;
            break;
        }
    }
    cout<<res<<'\n';
    
    return maru
}