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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            int key; string s;
            cin>>key>>s;
            for(int j=0; j<key; j++){
                if(s[j]=='U'){
                    if(arr[i]==0) arr[i]=9;
                    else arr[i]--;
                }
                if(s[j]=='D'){
                    if(arr[i]==9) arr[i]=0;
                    else arr[i]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout << '\n';
    }
    
    return maru
}