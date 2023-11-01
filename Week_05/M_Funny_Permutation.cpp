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
        if (n == 1 || n == 3)
        {
            cout << "-1\n";
            continue;
        }
        cout << n << " " << n - 1 << " ";
        for (int i = 1; i < n - 1; i++)
            cout << i << " ";
        cout << '\n';
    }

    return maru
}