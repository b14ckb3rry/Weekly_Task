//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=3;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        set<char>st;
        int n=s.size(), res=0;
        for(int i=0; i<n; i++){
            st.insert(s[i]);
            if(st.size()>N){
                st.clear();
                st.insert(s[i]);
                res++;
            }
        }
        if(st.size()!=0){
            res++;
        }
        cout<<res<<'\n';
    }
    
    return maru
}