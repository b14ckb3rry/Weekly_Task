//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N = 50;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int n;
    cin >> n;
    vector<set<int>> v;
    while (n--)
    {
        set<int> st;
        int x;
        cin >> x;
        while (x--)
        {
            int val;
            cin >> val;
            st.insert(val);
        }
        v.push_back(st);
    }
    int res = 0;
    for (int i = 1; i <= N; i++)
    {
        set<int> st;
        int count = 0;
        for (int j = 0; j < (int)v.size(); j++)
        {
            if (v[j].find(i) == v[j].end())
            {
                for (auto it : v[j])
                {
                    st.insert(it);
                }
            }
            else
            {
                count++;
            }
        }
        if (count != 0)
        {
            int tmp = st.size();
            res = max(res, tmp);
        }
    }
    cout << res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return maru
}