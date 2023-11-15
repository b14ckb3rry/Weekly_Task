//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

bool ok(ll x, ll y)
{
    if (y == 1)
    {
        return true;
    }
    ll GcD = __gcd(x, y);
    if (GcD == 1)
    {
        return false;
    }
    return ok(x, y / GcD);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    for (cin >> t; t; t -= 1)
    {
        ll a, b;
        cin >> a >> b;
        if (ok(a, b))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return maru
}