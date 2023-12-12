//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(int n, int k)
{
    vector<int> v(n + 1);
    vector<int> res(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        res[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        res[v[i]]++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (res[i] == 0)
        {
            v[0] = i;
            break;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        int mod = (k + i) % (n + 1);
        if (n < (k + i))
        {
            res[mod] = v[i];
        }
        else
        {
            res[k + i] = v[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << ' ';
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k %= (n + 1);
        solve(n, k);
        cout << '\n';
    }

    return maru
}