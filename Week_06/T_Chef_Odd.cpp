//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll temp = 0;
        if (n % 2 == 0)
        {
            temp = n / 2;
        }
        else
        {
            temp = n / 2 + 1;
        }
        if (n < k * 2)
        {
            cout << "NO\n";
        }
        else
        {
            ll ans = temp - k;
            if (ans % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return maru
}