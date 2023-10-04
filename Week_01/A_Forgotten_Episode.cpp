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
    int arr[n-1]; int res[n];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        res[i]=i+1;
    }
    sort(arr, arr+n-1);
    for(int i=0; i<n; i++){
        if(arr[i]!=res[i]){
            cout<<res[i]<<'\n';
            return maru
        }
    }
    return maru
}
