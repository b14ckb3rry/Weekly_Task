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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        vector<int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            m.push_back(x);
        }
        sort(m.begin(), m.end());
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == m[i])
            {
                continue;
            }
            if (x > i && x > (n - i - 1))
            {
                flag = true;
                break;
            }
        }
        if (!flag)
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