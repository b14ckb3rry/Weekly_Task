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
        vector<int>v(n);
        long long res=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            res+=abs(v[i]);
        }
        int key=1;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(flag && v[i]<=0) continue;
            else if(!flag && v[i]<0){
                flag=true;
                key++; 
            }
            else if(flag && v[i]>0) flag=false;
            
        }
        cout<<res<<' '<<key-1<<'\n';
    }
    
    return maru
}