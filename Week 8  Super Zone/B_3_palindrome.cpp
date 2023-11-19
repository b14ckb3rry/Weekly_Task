//***********************************//
//*         MD SIRAJUL ISLAM        *//
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
    
    ll n; cin>>n;
    string s;
    for(ll i=0; i<n; i++){
        if(i&2){
            s+='b';
        }
        else{
            s+='a';
        }
    }
    cout<<s<<'\n';
    
    return maru
}