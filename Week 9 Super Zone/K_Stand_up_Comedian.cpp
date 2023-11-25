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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << "1\n";
            continue;
        }
        int dif = abs(b - c);
        int mn1 = min(b, c);
        int mn2 = min(a + 1, dif + d);
        int sum = (a + mn1 * 2) + mn2;
        cout << sum << '\n';
    }

    return maru
}