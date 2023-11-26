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
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        string s;
        for (char c = 'A'; c <= 'Z' && n > count; c++, count++)
        {
            s += c;
        }
        cout << "Case " << i << ": \n" << s << '\n';
        string s1 = s;
        for (int j = 1; j < k; j++)
        {
            next_permutation(s.begin(), s.end());
            if (s == s1)
            {
                break;
            }
            cout << s << '\n';
        }
    }

    return maru
}