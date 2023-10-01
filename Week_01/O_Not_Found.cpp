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
    
    string comp="abcdefghijklmnopqrstuvwxyz";
    string s1, s2, res; cin>>s1;
    sort(s1.begin(), s1.end());
    for(int i=0 ; i<s1.size(); i++){
        if(s1[i]!=s1[i+1]){
            s2+=s1[i];
        }
    }
    for(int i=0; i<comp.size(); i++){
        if(comp[i]!=s2[i]){
            res+=comp[i];
        }
    }
    if(!res.empty()) cout<<res[0]<<'\n';
    else cout<<"None\n";
    
    return maru
}