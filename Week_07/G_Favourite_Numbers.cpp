//***********************************//
//*         MD SIRAJUL ISLAM        *//
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
        int x; cin>>x;
        if(x&1){
            if(x%9==0){
                cout<<"Bob\n";
            }
            else{
                cout<<"Charlie\n";
            }
        }
        else{
            if(x%7==0){
                cout<<"Alice\n";
            }
            else{
                cout<<"Charlie\n";
            }
        }
    }
    
    return maru
}