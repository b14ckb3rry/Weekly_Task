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

bool MIDexists(ll arr[], ll n, ll mid, ll x)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mid)
            sum += (mid - arr[i]);
    }
    return sum <= x;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll right = 0, left = INT_MAX, max_height = INT_MAX;
        while (right <= left)
        {
            ll mid = (left - right) / 2 + right;
            if (MIDexists(arr, n, mid, x))
            {
                max_height = mid;
                right = mid + 1;
            }
            else
                left = mid - 1;
        }
        cout << max_height << '\n';
    }

    return maru
}