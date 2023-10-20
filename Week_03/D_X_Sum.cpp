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
        int n,m; cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        int mx=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int curr=0;
                int ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj< m){
                    curr+=arr[ci][cj];
                    ci--; cj--;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    curr+=arr[ci][cj];
                    ci++; cj--;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    curr+=arr[ci][cj];
                    ci--; cj++;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    curr+=arr[ci][cj];
                    ci++; cj++;
                }
                curr-=arr[i][j]*3;
                mx=max(mx, curr);
            }
        }
        cout<<mx<<'\n';
    }
    
    return maru
}