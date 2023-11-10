//***********************************//
//*         MD SIRAJUL ISLAM        *//
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> cnt;
        for (int k = 0; k < n; k++)
        {

            int curr = a[k];
            for (int i = 2; i * i <= curr; i++)
            {
                while (curr % i == 0)
                {
                    cnt[i]++;
                    curr /= i;
                }
            }
            if (curr > 1)
            {
                cnt[curr]++;
            }
        }
        bool ok = true;
        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return maru
}