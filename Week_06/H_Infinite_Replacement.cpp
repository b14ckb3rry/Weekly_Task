//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s >> s1;
        if (s1 == "a")
        {
            cout << "1\n";
            continue;
        }
        int count = 0, sz = s1.size();
        for (int i = 0; i < sz; i++)
        {
            count += (s1[i] == 'a');
        }
        if (count >= 1)
        {
            cout << "-1\n";
        }
        else
        {
            ll res = pow(2, s.size());
            cout << res << '\n';
        }
    }

    return maru
}