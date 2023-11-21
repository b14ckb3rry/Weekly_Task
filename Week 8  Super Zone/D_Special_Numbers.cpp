//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
const ll MoD = 1e9 + 7;
const int N = 31;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll res = 0, p = 1;
        for (int i = 0; i < N; i++)
        {
            int x = 1 << i;
            if (k & x)
            {
                res = (res + p) % MoD;
            }
            p *= n;
            p %= MoD;
        }
        cout << res << '\n';
    }

    return maru
}