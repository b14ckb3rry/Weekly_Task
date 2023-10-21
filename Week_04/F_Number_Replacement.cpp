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
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        string s; cin>>s;
        bool flag=false;
        for(int i=0; i<n; i++){
            int check=v[i];
            char ch=s[i];
            for(int j=0; j<n; j++){
                if((v[j]==check && s[j]!=ch)){
                    flag=true;
                    break;
                }
            }
            if(flag){
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