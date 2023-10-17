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
    
    string _="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t; cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        if(_.find(s) != string::npos){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return maru
}
