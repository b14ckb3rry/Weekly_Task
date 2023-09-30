//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=26;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[N]={0};
        int count=0;
        for(int i=0; i<n; i++){
            char ch; cin>>ch;
            if(arr[ch-65]==0){
                count+=2;
                arr[ch-65]=1;
            }
            else count+=1;
        }
        cout<<count<<'\n';
    }
    
    return maru
}