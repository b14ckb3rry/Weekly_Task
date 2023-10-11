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
    
    int n; cin>>n;
    ll arr[n]; ll save[n+1];
    save[0]=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        save[i+1]=arr[i];
    }
    for(int i=1; i<=n; i++){
        save[i]+=save[i-1];
    }
    int t; cin>>t;
    while(t--){
        int pos1,pos2;
        cin>>pos1>>pos2;
        cout<<save[pos2+1]-save[pos1]<<'\n';
        
    }
    
    return maru
}