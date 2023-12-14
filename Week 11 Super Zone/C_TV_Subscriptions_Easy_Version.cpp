//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int n, d, k;
    cin >> n >> k >> d;
    vector<int> v(n);
    vector<int> res;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < d; i++)
    {
        st.insert(v[i]);
        res.push_back(v[i]);
    }
    int result = st.size();
    for (int i = d; i < n; i++)
    {
        res.push_back(v[i]);
        res.erase(res.begin());
        st.clear();
        for (int j = 0; j < res.size(); j++)
        {
            st.insert(res[j]);
        }
        // debug(st);
        result = min(result, (int)st.size());
    }
    cout << result << '\n';
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
    }

    return maru
}