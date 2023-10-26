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
        int n,k; cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>v;
        for(int i=0; i<n; i++){
            if(k==(k & arr[i])){
                v.push_back(arr[i]);
            }
        }
        if(v.size()!=0){
            int cur=v[0];
            for(int i=1; i<v.size(); i++){
                cur&=v[i];
            }
            if(cur==k) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    
    return maru
}