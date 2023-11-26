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

        int mn = 1e9 + 7;
        vector<int> dp;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> v(m);
            for (int i = 0; i < m; i++)
            {
                cin >> v[i];
            }
            int minielement = *min_element(v.begin(), v.end());
            mn = min(mn, minielement);
            v.erase(find(v.begin(), v.end(), minielement));
            int temp = *min_element(v.begin(), v.end());
            dp.push_back(temp);
        }
        ll res = accumulate(dp.begin(), dp.end(), 0ll) - *min_element(dp.begin(), dp.end());
        cout << mn + res << '\n';
    }

    return maru
}