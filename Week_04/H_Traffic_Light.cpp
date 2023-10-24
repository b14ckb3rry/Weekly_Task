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
        int n; char c; string s;
        cin>>n>>c>>s;
        vector<int>gI;
        vector<int>cI;
        s+=s;
        for(int i=0; i<n*2; i++){
            if(s[i]=='g'){
                gI.push_back(i);
            }
            if(s[i]==c){
                cI.push_back(i);
            }
        }
        int res=0;
        for(auto val:cI) {
            if(val>=n){
                break;
            }
            //Find lower bound positon
            int pos=lower_bound(gI.begin(), gI.end(), val) - gI.begin();
            res=max(res, abs(gI[pos] - val));
        }
        cout<<res<<'\n';

    }
    
    return maru
}