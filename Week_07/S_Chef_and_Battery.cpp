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
        int n;
        cin>>n;
        int count = 0;
        while(n!=50){
            if(n>50){
                n-=3;
                count++;
            }
            else{
                n+=2;
                count++;
            }
        }
        cout<<count<<'\n';
    }
    
    return maru
}