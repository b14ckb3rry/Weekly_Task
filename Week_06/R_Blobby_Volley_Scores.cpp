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
        bool flag = true, flag2 = false;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                flag = true;
                if (!flag2)
                {
                    a++;
                }
                else
                {
                    flag2 = false;
                }
            }
            if (s[i] == 'B')
            {
                flag2 = true;
                if (!flag)
                {
                    b++;
                }
                else
                {
                    flag = false;
                }
            }
        }
        cout << a << " " << b << '\n';
    }

    return maru
}