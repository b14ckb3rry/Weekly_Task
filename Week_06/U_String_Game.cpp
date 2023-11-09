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
        string s;
        cin >> n >> s;
        int z = 0, o = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        int res = min(o, z);
        if (res % 2 == 0)
        {
            cout << "Ramos\n";
        }
        else
        {
            cout << "Zlatan\n";
        }
    }

    return maru
}