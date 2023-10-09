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
        string s; cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        // cout<<s<<'\n';
        if(s=="yes") cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return maru
}