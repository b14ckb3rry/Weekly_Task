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
        int n; string s;
        cin>>n>>s;
        int res=n-1;
        for (int i=1; i+1<n; i++) {
            if (s[i-1]==s[i+1]) {
                res--;
            }
        }
        cout<<res<<'\n';
    }
    
    return maru
}