//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll res=0;
        priority_queue<int>p;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x==0 && !p.empty()){
                res+=p.top();
                p.pop();
            }
            else p.push(x);
        }
        cout<<res<<'\n';
    }
    
    return maru
}