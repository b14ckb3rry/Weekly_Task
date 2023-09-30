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
    
    string s; cin>>s;
    int len=s.size();
    if(len==1) cout<<"000"+s<<'\n';
    else if(len==2) cout<<"00"+s<<'\n';
    else if(len==3) cout<<"0"+s<<'\n';
    else cout<<s<<'\n';
    
    return maru
}