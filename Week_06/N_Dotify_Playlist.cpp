//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int res = 0;
        for (auto [x, y] : v)
        {
            if (y == l)
            {
                res += x;
                k--;
            }
            if (k == 0)
            {
                break;
            }
        }
        if (k != 0 || res < 1)
        {
            cout << "-1\n";
        }
        else
        {
            cout << res << '\n';
        }
    }

    return maru
}