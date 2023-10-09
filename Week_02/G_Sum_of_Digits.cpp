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
    
    int counter=0;
    string s; cin>>s;
    while(1<s.size()) {
        long long res=0;
        for(auto ch:s){
            res+=ch-48;
        }
        stringstream st; st<<res;
        s=st.str();
        counter++;
    }   
    cout<<counter<<'\n';
    
    return maru
}
