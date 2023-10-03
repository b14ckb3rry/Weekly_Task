//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=3;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        map<string,int>mp;
        vector<string>arr[N];
        vector<int>freq_count;
        int n; cin>>n;
        for(int i=0; i<N; i++){
            for(int j=0; j<n; j++) {
                string s; cin >> s;
                arr[i].push_back(s);
                mp[s]++;
            }
        }
        int sum;
        for(int i=0; i<N; i++){
            sum=0;
            for(int j=0; j<n; j++){
                if(mp[arr[i][j]]==3){
                    sum+=0;
                }
                else if(mp[arr[i][j]]==2){
                    sum+=1;
                }
                else if(mp[arr[i][j]]==1){
                    sum+=3;
                }
            }
            freq_count.push_back(sum);
        }
        for(auto x:freq_count){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    
    return maru
}