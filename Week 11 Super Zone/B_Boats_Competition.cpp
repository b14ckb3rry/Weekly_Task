//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(int n)
{
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int res = INT_MIN;
    for (int i = 2; i <= n * 2; i++)
    {
        int temp = 0;
        for (int j = 1; j < (i + 1) / 2; j++)
        {
            if (!(i - j > n))
            {
                temp += min(v[j], v[i - j]);
            }
        }
        if (i % 2 == 0)
        {
            temp += v[i / 2] / 2;
        }
        res = max(res, temp);
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
        int n;
        cin >> n;
        solve(n);
        cout << '\n';
    }

    return maru
}