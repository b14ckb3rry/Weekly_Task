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
        int arr[n]; set<int>st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        int sz=st.size();
        if(n%2==0){
            if(sz%2==0){
                cout<<sz<<'\n';
            }
            else{
                if(sz==1){
                    cout<<"0\n";
                }
                else{
                    cout<<sz-1<<'\n';
                }
            }
        }
        else{
            if(sz%2==0){
                cout<<sz-1<<'\n';
            }
            else{
                if(sz==1){
                    cout<<"1\n";
                }
                else{
                    cout<<sz<<'\n';
                }
            }
        }
    }
    
    return maru
}