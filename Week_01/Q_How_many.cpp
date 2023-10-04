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
    
    int s,t; cin>>s>>t;
    int count=0;
    for(int i=0; i<=s; i++) {
        for(int j=0; j<=s; j++) {
            for(int k=0; k<=s; k++) {
                if(i+j+k<=s && i*j*k<=t){
                    count++;
                }
            }
        }
    }
    cout<<count<<'\n';
    
    return maru
}