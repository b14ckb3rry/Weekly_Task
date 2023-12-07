//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(long long n)
{
    vector<vector<int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v[i].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char x;
            cin >> x;
            if (x == '1')
            {
                v[j].push_back(i);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i].size() << ' ';
        for (auto x : v[i])
        {
            cout << x << ' ';
        }
        cout << '\n';
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
        long long n;
        cin >> n;
        solve(n);
    }

    return maru
}