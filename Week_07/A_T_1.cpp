//***********************************//
//*         MD SIRAJUL ISLAM        *//
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

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = 0;
    ans += ((n / a) * p);
    ans += ((n / b) * q);
    ll LCM = lcm(a, b);
    ll same = n / LCM;
    ans -= (same * (p + q));
    ans += (same * (max(p, q)));
    cout << ans << '\n';

    return maru
}