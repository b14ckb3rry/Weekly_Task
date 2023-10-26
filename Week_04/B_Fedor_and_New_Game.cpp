//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

bool ok(int x, int y, int k){
    int count=__builtin_popcount(x ^ y);
    if(k>=count) return true;
    else return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k; cin>>n>>m>>k;
    int arr[m+2];
    for(int i=1; i<=m+1; i++){
        cin>>arr[i]; 
    }
    int res=0;
    for(int i=1; i<m+1; i++){
        res+=ok(arr[i], arr[m+1], k);
    }
    cout<<res<<'\n';
    
    return maru
}