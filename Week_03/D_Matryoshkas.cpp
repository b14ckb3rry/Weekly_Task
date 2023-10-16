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
        int arr[n];
        map<int, int>mp; set<int>st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            st.insert(arr[i]);
            st.insert(arr[i]+1);
        }
        int last=0, res=0;
        for(auto val:st){
            int cur=mp[val];
            res+=max(0, cur-last);
            last=cur;
        }
        cout<<res<<'\n';
    }
    
    return maru
}