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

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll mx = INT_MIN;
    for (auto x : v)
    {
        if (x > mx)
        {
            mx = x;
        }
    }
    ll GcD = 0;
    for (auto x : v)
    {
        GcD = __gcd(mx - x, GcD);
    }
    ll res = 0;
    for (auto x : v)
    {
        res += (mx - x) / GcD;
    }
    cout << res << " " << GcD << '\n';

    return maru
}