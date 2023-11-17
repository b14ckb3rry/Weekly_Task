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
        int n;
        cin >> n;
        vector<ll> cnt(n + 1);
        vector<ll> mx(n + 1);
        for (int i = 0; i < n; i++)
        {
            cnt[i] = 0;
            mx[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= n){
                cnt[x]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                mx[j] += cnt[i];
            }
        }
        ll res = *max_element(mx.begin(), mx.end());
        cout << res << '\n';
    }

    return maru
}