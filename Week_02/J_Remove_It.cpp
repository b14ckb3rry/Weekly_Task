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
    
    int n,key; cin>>n>>key;
    vector<int>v;
    while(n--){
        int x; cin>>x;
        if(x!=key){
            v.push_back(x);
        }
    }
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<'\n';
    
    return maru
}