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
        string st, st2, comp="meow";
        cin>>st;
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        for(int i=0; i<n-1; i++){
            if(st[i]!=st[i+1]){
                st2.push_back(st[i]);
            }
        }
        st2.push_back(st[n-1]);
        if(st2==comp){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return maru
}