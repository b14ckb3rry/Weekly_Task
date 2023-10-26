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
	    ll arr[n];
	    for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        ll x,y;
	    x=*max_element(arr, arr+n);
	    int xc=0, yc=0;
	    while(x!=0){
	        x/=2;
	        xc++;
	    }
	    y=pow(2, xc-1);
	    for(int i=0; i<n; i++){
	        if(arr[i]>=y){
                yc++;
            }
	    }
        int mod=yc/2;
	    if(yc%2==1) cout<<mod+1<<'\n';
	    else cout<<mod<<'\n';
    }
    
    return maru
}