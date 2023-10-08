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
    
    string s1,s2; cin>>s1>>s2;
    int count=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]!=s2[i]){
            count++;
        }
    }
    cout<<count<<'\n';
    
    return maru
}