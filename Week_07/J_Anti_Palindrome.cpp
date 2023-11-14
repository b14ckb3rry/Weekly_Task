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
        string s;
        cin >> s;
        unordered_map<char, int> ump;
        for (int i = 0; i < (int)s.size(); i++)
        {
            ump[s[i]]++;
        }
        int res = INT_MIN, odd = 0;
        for (auto x : ump)
        {
            if (x.second % 2 != 0)
            {
                odd++;
            }
            res = max(res, x.second);
        }
        if ((n % 2 == 0 && odd >= 1) || odd > 1)
        {
            cout << "0\n";
        }
        else if ((odd == 1 && res != n) || res % 2 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }

    return maru
}