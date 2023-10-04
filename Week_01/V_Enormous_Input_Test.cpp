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
    
    int t, n; cin>>t>>n;
    int res=0;
    while(t--){
        int x; cin>>x;
        if(x%n==0){
            res++;
        }
    }
    cout<<res<<'\n';
    
    return maru
}