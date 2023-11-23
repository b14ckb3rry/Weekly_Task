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
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "2 " << n - 3 << " 1\n";
            continue;
        }
        n--;
        n = n / 2;
        if (n % 2 == 0)
        {
            cout << n - 1 << " " << n + 1 << " 1\n";
        }
        else
        {
            cout << n - 2 << " " << n + 2 << " 1\n";
        }
    }

    return maru
}