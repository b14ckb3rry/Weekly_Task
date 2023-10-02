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
    
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        int lulu=i+1;
        if(lulu%2!=0){
            cout<<s[i];
        }
    }
    cout<<'\n';
    
    return maru
}