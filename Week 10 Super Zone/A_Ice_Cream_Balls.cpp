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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll left = 0, right = INT_MAX, mid, res = 2;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            ll val = (mid * (mid - 1)) / 2;
            if (val <= n)
            {
                res = mid + (n - val);
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << res << '\n';
    }

    return maru
}