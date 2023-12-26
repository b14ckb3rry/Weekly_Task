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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (char i = 'a'; i <= 'z' && k > 0; i++)
    {
        for (int j = 0; j < n && k > 0; j++)
        {
            if (s[j] == i)
            {
                s[j] = '#';
                k--;
                mp[i]--;
                if (mp[i] == 0)
                {
                    break;
                }
            }
        }
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != '#')
        {
            cout << s[i];
        }
    }
    cout << '\n';

    return maru
}