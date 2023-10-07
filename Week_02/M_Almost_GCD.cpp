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
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int mx=arr[n-1], ans=INT_MIN, index;
    for(int i=2; i<=mx; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[j]%i==0){
                cnt++;
            }
        }
        if(cnt>ans){
            ans=cnt;
            index=i;
        }
    }
    cout<<index<<'\n';
    
    return maru
}