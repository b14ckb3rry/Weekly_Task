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
    
    int k,s; cin>>k>>s;
    int res=0;
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int x=i+j;
            if(s-x<=k && s-x>=0){
                res++;
            }
        }
    }
    cout<<res<<'\n';
    
    return maru
}