//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int chk = v[i];
            for (int j = 0; j < n; j++)
            {
                if ((v[j] == chk && s[j] != c))
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        cout << (flag ? "NO\n" : "YES\n");
    }

    return maru
}