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
        int n,s1,s2; cin>>n>>s1>>s2;
        int d=s1-s2;
        vector<int>res;
        for (; s2>=d; s2-=d){
            res.push_back(d);
        }
        if(s2) res.push_back(s2);
        for(int i=0; i<res.size() && res.size()+1<n;){
            if(res[i]==1){
                i++;
                continue;
            }
            res[i]--;
            res.push_back(1);
        }
        res.push_back(d);
		sort(res.begin(), res.end());
		for(auto x:res) cout<<x<<' ';
		cout<<'\n';
    }
    
    return maru
}