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
        int n, a, b, c;
        cin >> n;
        // a = b = c = n / 3;
        a = n / 3;
        b = a;
        c = a;
        if (n % 3 == 0)
        {
            b++;
            c--;
        }
        else if ((n % 3) & 1)
        {
            b += 2;
            c--;
        }
        else if (n % 3 == 2)
        {
            a++;
            b += 2;
            c--;
        }
        cout << a << " " << b << " " << c << '\n';
    }

    return maru
}