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

    int n; cin>>n;
    string s; cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
            count++;
            i+=2;
        }
    }
    cout<<count<<'\n';
    
    return maru
}
