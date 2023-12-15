//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N = 1e6;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int res = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (abs(v[i] - 1) > abs(v[i] - N))
        {
            res = max(res, abs(v[i] - N));
        }
        else
        {
            res = max(res, abs(v[i] - 1));
        }
    }
    cout << res << '\n';

    return maru
}