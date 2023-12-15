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
        int n, s;
        cin >> n >> s;
        if (n > s)
        {
            cout << "No\n";
            continue;
        }
        else if (n % 2 == 0 && s & 1)
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        if (n & 1)
        {
            for (int i = 1; i < n; i++)
            {
                s--;
                cout << "1 ";
            }
            cout << s << '\n';
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                s--;
                cout << "1 ";
            }
            int res = s / 2;
            cout << res << " " << res << '\n';
        }
    }

    return maru
}