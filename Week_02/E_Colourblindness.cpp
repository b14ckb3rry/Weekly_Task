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
        string s1, s2; cin>>s1>>s2;
        bool flag=false;
        for(int i=0; i<n; i++){
            if((s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')){
                continue;
            }
            else if(s1[i]!=s2[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    
    return maru
}