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
        set<int>st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        bool same=st.size();
        if(same==false){
            cout<<"0\n";
        }
        else{
            sort(arr, arr+n);
            int first = 0, last = n-1, sum=0;
            while(first<last){
                sum+=(arr[last] - arr[first]);
                first++;
                last--;
            }
            cout<<sum<<'\n';
        }
    }
    
    return maru
}