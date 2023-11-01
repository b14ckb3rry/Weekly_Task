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
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if (a == b)
        {
            cout << "0\n";
        }
        else if (x <= abs(a - b))
        {
            cout << "1\n";
        }
        else if ((r - a) >= x && (r - b) >= x)
        {
            cout << "2\n";
        }
        else if ((a - l) >= x && (b - l) >= x)
        {
            cout << "2\n";
        }
        else if (abs(a - b) < x)
        {
            if (abs(a - l) < x && abs(a - r) < x)
            {
                cout << "-1\n";
            }
            else if (b > a && abs(l - b) < x)
            {
                cout << "-1\n";
            }
            else if (b < a && abs(r - b) < x)
            {
                cout << "-1\n";
            }
            else
            {
                cout << 3 << endl;
            }
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return maru
}