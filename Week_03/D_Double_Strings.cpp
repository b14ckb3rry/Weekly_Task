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
        int n; cin>>n;
        string st[n];
        map<string, bool>mp;
        for(int i=0; i<n; i++){
            cin>>st[i];
            mp[st[i]]=true;
        }
        for(int i=0; i<n; i++){
            bool flag=false;
            for(int j=1; j<st[i].length(); j++){
                string pref=st[i].substr(0, j);
                string suff=st[i].substr(j, st[i].length()-j);
                if(mp[pref] && mp[suff]) flag=true;	
            }
            cout<<flag;
        }
        cout<<'\n';
    }
    
    return maru
}