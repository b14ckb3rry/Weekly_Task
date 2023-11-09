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

    vector<string> vs;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            if (i == j)
            {
                continue;
            }
            string x;
            // x = i + j;
            x.push_back(i);
            x.push_back(j);
            vs.push_back(x);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0; i < vs.size(); i++)
        {
            if (vs[i] == s)
            {
                res = i + 1;
                break;
            }
        }
        cout << res << '\n';
    }

    return maru
}