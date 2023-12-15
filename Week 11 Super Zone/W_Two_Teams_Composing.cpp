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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        int mx = INT_MIN;
        for (auto x : v)
        {
            if (x > mx)
            {
                mx = x;
            }
        }
        int zero = count(v.begin(), v.end(), 0);
        int diff = n + 1 - zero;
        int tmp1 = min(mx - 1, diff);
        int tmp2 = min(mx, diff - 1);
        cout << max(tmp1, tmp2) << '\n';
    }

    return maru
}