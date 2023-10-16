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
        ll n; cin>>n;
        string s; cin>>s;
        if(s.size()==1){
            cout<<"0\n";
            continue;
        }
        vector<ll>v; ll res=0;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                ll val=(n-1-i)-i;
			    v.push_back(val);
                res+=i;
            }
            if(s[i]=='R'){
                ll val=i-(n-1-i);
			    v.push_back(val);
			    res+=n-1-i;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for(auto x:v){
            if(x>0){
                res+=x;
            }
            cout<<res<<' ';
        }
        cout<<'\n';
    }
    
    return maru
}