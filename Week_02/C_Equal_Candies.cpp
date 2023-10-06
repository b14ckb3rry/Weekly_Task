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
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        bool flag=false;
        int chk=1; int mini=INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mini=min(mini, arr[i]);
        }
        // cout<<mini<<'\n';
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                chk++;
            }
            if(chk==n){
                flag=true;
            }
        }
        if(n==1 || flag){
            cout<<"0\n";
            continue;
        }
        int eat=0;
        for(int i=0; i<n; i++){
            int x=arr[i]-mini;
            if(x==0){
                continue;
            }
            else{
                eat+=x;
            }
        }
        cout<<eat<<'\n';
    }
    
    return maru
}