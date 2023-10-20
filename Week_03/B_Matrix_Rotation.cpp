//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=4;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        vector<int>arr(N);
        for(int i=0; i<4; i++) cin>>arr[i];
        int mxpos=max_element(arr.begin(), arr.end())-arr.begin();
        int minpos = min_element(arr.begin(), arr.end())-arr.begin();
        if(mxpos+minpos==3) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return maru
}