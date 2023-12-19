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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (n % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    vector<int> res(n);
    int j = 0;
    for (int i = 0; i < n; i += 2)
    {
        res[i] = v[j];
        j++;
    }
    for (int i = 1; i < n; i += 2)
    {
        res[i] = v[j];
        j++;
    }
    res.push_back(res[0]);
    for (int i = 1; i < n; i++)
    {
        if (res[i - 1] > res[i] && res[i] < res[i + 1])
        {
            continue;
        }
        else if (res[i - 1] < res[i] && res[i] > res[i + 1])
        {
            continue;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    // debug(res);
    res.pop_back();
    cout << "YES\n";
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << '\n';
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