//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] > 0)
        {
            x += a[i];
        }
    }
    ll res = 0;
    res = max(res, x);
    x = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > 0)
        {
            x += a[i];
        }
    }
    cout << max(res, x);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return maru
}