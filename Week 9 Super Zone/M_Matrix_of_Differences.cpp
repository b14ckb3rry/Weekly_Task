//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1][n + 1];
    int cnt = 1;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (flag)
            {
                arr[i][j] = n * n + 1 - cnt;
                cnt++;
                flag = false;
            }
            else
            {
                arr[i][j] = cnt;
                flag = true;
            }
        }
        if (i % 2 == 0)
        {
            reverse(arr[i] + 1, arr[i] + n + 1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
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
        solve();
    }

    return maru
}