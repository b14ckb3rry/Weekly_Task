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
        string s;
        cin >> n >> s;
        s = '0' + s;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int res = 0, i = 0;
        while (i <= n)
        {
            int mn = v[i];
            int sm = v[i];
            int temp = i + 1;
            while (n >= temp && s[temp] == '1')
            {
                mn = min(mn, v[temp]);
                sm += v[temp];
                temp++;
            }
            res += sm - mn;
            i = temp;
        }
        cout << res << '\n';
    }

    return maru
}