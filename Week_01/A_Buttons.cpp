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
    
    int a,b; cin>>a>>b;
    if(a==b) cout<<a+b<<'\n';
    else{
        int mx=max(a,b);
        cout<<mx*2-1<<'\n';
    }
    
    return maru
}