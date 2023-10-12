//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=9, M=8;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        char ch[N][N];
        for(int i=1; i<=M; i++){
            for(int j=1; j<=M; j++){
                cin>>ch[i][j];
            }
        }
        int hold=0;
        bool flag=false, chk=false;
        for(int i=1; i<=M; i++){
            int count=0;
            for(int j=1; j<=M; j++){
                if(ch[i][j]=='#'){
                    count++;
                    hold=j;
                }
            }
            int I,J;
            if(count==2){
                flag=true;
            }
            if(flag && count==1){
                chk=true;
                I=i; J=hold;
            }
            if(flag && chk && count==2){
                cout<<I<<' '<<J<<'\n';
                break;
            }
        }
    }
    
    return maru
}