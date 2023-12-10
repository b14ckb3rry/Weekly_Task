//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
const int N = 31;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll tmp = 1;
        while (tmp < n)
        {
            v.push_back(tmp);
            tmp *= 2;
        }
        ll last = v.back();
        ll r = n - last;
        tmp = 0;
        for (int i = N; i >= 0; i--)
        {
            ll bit = r & (1 << i);
            if (bit)
            {
                int x = pow(2, i);
                last += x;
                v.push_back(last);
            }
        }
        if (tmp)
        {
            v.push_back(n);
        }
        n = v.size();
        cout << n << '\n';
        sort(v.rbegin(), v.rend());
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return maru
}