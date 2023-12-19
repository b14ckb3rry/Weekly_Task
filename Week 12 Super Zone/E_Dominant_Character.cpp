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
const int N = 1e6 + 5;

bool chk(int n)
{
    return n == N ? true : false;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int res = N;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            v[i] = 0;
        }
        v[s[i] - 'a']++;
        int k = min(n, i + 7);
        for (int j = i + 1; j < k; j++)
        {
            char tmp = s[j];
            v[tmp - 97]++;
            if (v[0] > v[1] && v[0] > v[2])
            {
                res = min(res, j - i + 1);
            }
        }
    }
    if (chk(res))
    {
        res = -1;
    }
    cout << res << '\n';
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
    }

    return maru
}