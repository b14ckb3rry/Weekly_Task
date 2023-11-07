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
        string s;
        cin >> s;
        int zero = s.size() - 1, one = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                one = i;
                break;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero = i;
                break;
            }
        }
        cout << zero - one + 1 << '\n';
    }

    return maru
}