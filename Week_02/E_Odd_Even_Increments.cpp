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
        int e[n];
        for(int i=0; i<n; i++){
            cin>>e[i];
        }
        int arr[n];
        int odd=0, eve=0;
        for(int i=0; i<n; i++){
            arr[i]=e[i];
            if(arr[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(eve==n || odd==n){
            cout<<"YES\n";
            continue;
        }
        eve=0; odd=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                arr[i]=arr[i]+1;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(eve==n || odd==n){
            cout<<"YES\n";
            continue;
        }
        eve=0; odd=0;
        for(int i=0; i<n; i++){
            arr[i]=e[i];
        }
        for(int i=0; i<n; i++){
            if(i%2!=0){
                arr[i]=arr[i]+1;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                odd++;
            }
            else{
                eve++;
            }
        }
        if(eve==n || odd==n){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    
    return maru
}