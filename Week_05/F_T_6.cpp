//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

bool ok(double a, double b)
{
    return fabs(a - b) < 1e-13;
}

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 1, r = *max_element(v.begin(), v.end()), mid;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            double res = 1.0;
            for (auto x : v)
                res *= x * 1.0 / mid * 1.0;
            if (ok(res, 1.0))
            {
                flag = true;
                break;
            }
            else if (res > 1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return maru
}