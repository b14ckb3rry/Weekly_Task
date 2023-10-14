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
    
    int t;
    for(cin>>t; t; t-=1){
        int n; cin>>n;
        string s; cin>>s;
        sort(s.begin(), s.end());
        // cout<<s<<'\n';
        string chk="Timru";
        if(chk==s) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return maru
}