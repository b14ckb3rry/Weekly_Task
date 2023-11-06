//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int white = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                white++;
            }
        }
        int res = white;
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
            {
                white++;
            }
            if (s[i - k] == 'W')
            {
                white--;
            }
            res = min(white, res);
        }
        cout << res << '\n';
    }

    return maru
}
