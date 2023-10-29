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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, s;
    cin >> n >> s;
    ll l = 0, r = n, res = 0;
    while(l <= r) {
        ll m = (r - l) / 2 + l;
        ll cnt = 0, x = m;
        while( x > 0) {
            cnt += (x % 10);
            x /= 10;
        }
        if(cnt + s <= m) {
            r = m - 1;
            res = m;
        }
        else {
            l = m + 1;
        }
    }
    if (r == n) cout << "0\n";
    else cout << n - res + 1 << '\n';
    
    return maru
}