//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int solve(string s)
{
    int res = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == 'B' && res != 0)
        {
            res++;
        }
        else
        {
            res--;
        }
    }
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << abs(solve(s)) << '\n';
    }

    return maru
}