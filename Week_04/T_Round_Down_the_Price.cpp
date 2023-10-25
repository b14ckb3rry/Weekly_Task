//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int counter(int n){
    int res=0;
    while(n!=0){
        res++;
        n/=10;
    }
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        // int cent=0;
        // while(n!=0){
        //     cent++;
        //     n/=10;
        // }
        int cnt=counter(n);
        long long x=pow(10, cnt-1);
        cout<<abs(x-n)<<'\n';
    }
    
    return maru
}