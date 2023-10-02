//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=1000;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c; cin>>a>>b>>c;
    bool res=false;
    int temp=0;
    for(int i=0; i<N; i++){
        temp=c-(a*i);
        if(temp<0){
            res=false;
            break;
        }
        else if(temp%b==0){
            res=true;
            break;
        }
    }
    if(res) cout<<"Yes\n";
    else cout<<"No\n";

    return maru
}