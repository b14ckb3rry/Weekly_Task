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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int cnt = 0, res = 0;
        for (auto x : v)
        {
            if (mp[x] == 0)
            {
                res += x;
                cnt++;
                mp[x]++;
                if (cnt == 2)
                {
                    break;
                }
            }
        }
        cout << res << '\n';
    }

    return maru
}