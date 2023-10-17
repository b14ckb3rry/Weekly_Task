//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
const int N=12;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> cnt(N, vector<int>(N, 0));
        ll res=0;
        for(int i=0; i<n; i++){
            string s; cin>>s;
            for(int j=0; j<2; j++){
                for(char c='a'; c<='k'; c++){
                    if(c==s[j]){
                        continue;
                    }
                    else{
                        string a=s; a[j]=c;
                        res+=cnt[a[0]-'a'][a[1]-'a'];
                    }
                }
            }
            cnt[s[0]-'a'][s[1]-'a']++;
        }
        cout<<res<<'\n';
    }
    
    return maru
}