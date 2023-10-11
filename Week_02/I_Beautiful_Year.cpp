//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    while(true){
        n++;
        int first=n/1000;
        int second=n/100%10;
        int third=n/10%10;
        int four=n%10;
        if(first!=second && first!=third && first!=four && second!=third && second!=four && third!=four){
            cout<<n<<'\n';
            return maru
        }
    }
}