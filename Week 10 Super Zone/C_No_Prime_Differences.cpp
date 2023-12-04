//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve()
{
    int n, m;
    cin >> n >> m;
    int final = m + 1;
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            cout << final++ << " ";
        }
        final += m;
        cout << '\n';
    }
    final = 1;
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            cout << final++ << " ";
        }
        final += m;
        cout << '\n';
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