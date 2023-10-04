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

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    vector<ll>odd;
    vector<ll>even;
    ll ev=0, od=0, res=0;
    while(n--){
        int x; cin>>x;
        if(x%2==0){
            even.push_back(x);
            ev++;
        }
        else{
            odd.push_back(x);
            od++;
        }
    }
    if(od==true && ev==false) {
        cout<<"0\n";
        return maru
    }
    for(auto x:even){
        res+=x;
    }
    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());
    if(od%2==0){
        for(auto x:odd){
            res+=x;
        }
        cout<<res<<'\n';
    }
    else{
        for(int i=0; i<od-1; i++){
            res+=odd[i];
        }
        cout<<res<<'\n';
    }

    return maru
}