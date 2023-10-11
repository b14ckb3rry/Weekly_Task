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
        int n,m; cin>>n>>m;
        vector<string>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int res=INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int count=0;
                string s1=v[i], s2=v[j];
                for(int k=0; k<m; k++){
                    count+=abs(s1[k]-s2[k]);
                }
                res=min(res, count);
            }
        }
        cout<<res<<'\n';
    }
    
    return maru
}