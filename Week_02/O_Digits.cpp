//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int solve(int n, int k){
    int res=0;
    while(true){
        if(n<=0){
            break;
        }
        n/=k;
        res++;
    }
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k; cin>>n>>k;
    cout<<solve(n,k)<<'\n';
    
    return maru
}