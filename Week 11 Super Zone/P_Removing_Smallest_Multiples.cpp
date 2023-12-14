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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    s = 'c' + s;
    long long res = 0;
    vector<bool> v(n + 1);
    int k = 1;
    while (k <= n)
    {
        for (int i = k; i <= n; i += k)
        {
            if (s[i] == '1')
            {
                break;
            }
            if (v[i] == true)
            {
                continue;
            }
            res += k;
            v[i] = true;
        }
        k++;
    }
    cout << res;
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