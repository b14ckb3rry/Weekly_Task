//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int hisab(int n) {
    int count=0;
    while(n%2==0){
        count++;
        n/=2;
    }
    return count;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        vector<int>arr;
        int count=0, besi=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            count+=hisab(v[i]);
            besi+=hisab(i+1);
            arr.push_back(hisab(i+1));
        }
        if(count>=n) cout<<"0\n";
        else if(n>count+besi) cout<<"-1\n";
        else{
            int res=0;
            sort(arr.begin(), arr.end());
            reverse(arr.begin(), arr.end());
            for(auto x:arr){
                res++;
                if(x+count>=n) break;
                else count+=x;
            }
            cout<<res<<'\n';
        }
    }
    
    return maru
}