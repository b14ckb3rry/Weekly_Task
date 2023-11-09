//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
const ll MoD = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll res = 1;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                res = (k * res) % MoD;
                k--;
            }
            else
                break;
        }
        cout << res << '\n';
    }

    return maru
}