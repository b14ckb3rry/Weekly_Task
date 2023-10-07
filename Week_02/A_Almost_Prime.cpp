//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

bool isPrime(int n){
    if (n==2 || n==3){
        return true;
    }
    if (n<=1 || n%2==0 || n%3==0){
        return false;
    }
    for (int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    int res=0;
    for(int i=1; i<=n; i++){
        int counter=0;
        for(int j=2; j<=n; j++){
            if(i%j==0 && isPrime(j)){
                counter++;
            }
        }
        if(counter==2){
            res++;
        }
    }
    cout<<res<<'\n';
    
    return maru
}