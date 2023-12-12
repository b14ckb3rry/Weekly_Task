//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(int n, int k)
{
    string s;
    cin >> s;
    vector<char> od;
    vector<char> ev;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i & 1)
        {
            od.push_back(s[i]);
        }
        else
        {
            ev.push_back(s[i]);
        }
    }
    int oc = 0, ec = 0;
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s;
        return;
    }
    sort(od.begin(), od.end());
    sort(ev.begin(), ev.end());
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            cout << od[oc];
            oc++;
        }
        else
        {
            cout << ev[ec];
            ec++;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
        cout << '\n';
    }

    return maru
}