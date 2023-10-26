//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=360;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int m=0; m<(1<<n); m++){
        int res=0;
        for(int i=0; i<n; i++){
            if((m>>i)&1) res+=arr[i];
            else res-=arr[i];
        }
        res%=N;
        res=abs(res);
        if(res==0){
            flag=true;
            break;
        }
    }
    cout<<(flag ? "YES" : "NO")<<'\n';

    return maru
}