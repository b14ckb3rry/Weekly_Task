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
        int a, b, c;
        cin >> a >> b >> c;
        int sum1 = abs(a - 1);
        int sum2 = abs(b - c) + abs(c - 1);
        if (sum1 < sum2)
            cout << "1\n";
        else if (sum1 > sum2)
            cout << "2\n";
        else
            cout << "3\n";
    }

    return maru
}