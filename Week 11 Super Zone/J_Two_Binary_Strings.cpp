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

void solve(string s, string t)
{
    int st1 = -1, st2 = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            st1 = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (t[i] == '0')
        {
            st2 = i;
            break;
        }
    }
    if (st1 == st2)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            st1 = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (t[i] == '1')
        {
            st2 = i;
            break;
        }
    }
    if (st1 == st2)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == t[i] && s[i] == '0' && s[i + 1] == t[i + 1] && s[i + 1] == '1')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        solve(s, t);
    }

    return maru
}
