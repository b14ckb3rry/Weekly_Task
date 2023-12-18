//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif
typedef long long ll;
const int N = 2e5 + 5;
int arr[N], n, k, res;

bool chk(int x)
{
    ll sum = 0;
    for (int i = n / 2 + 1; i <= n; i++)
    {
        if (arr[i] < x)
        {
            sum += x - arr[i];
        }
    }
    if (sum <= k)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    int l = 0, r = 2e9, m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (chk(m))
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << res << '\n';

    return maru
}