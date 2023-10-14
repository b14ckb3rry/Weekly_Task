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
    
    string pi="314159265358979323846264338327";
    int t; cin>>t;
    while(t--){
        int counter=0;
        string comp; cin>>comp;
        for(int j=0,k=0; j<comp.length(), k<pi.length(); j++, k++){
            if(pi[k]==comp[j]){
                counter+=1;
            }
            else{
                break;
            }
        }
        cout<<counter<<'\n';
    }
    
    return maru
}
