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
    
    int sec,bis,time; cin>>sec>>bis>>time;
    int count=0, i=1, temp=sec;
    while(true){
        sec=temp*i; i++;
        if(sec>time){
            break;
        }
        else{
            count+=bis;
        }
    }
    cout<<count<<'\n';
    
    return maru
}