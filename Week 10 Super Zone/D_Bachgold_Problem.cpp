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

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int ans = n / 2;
        cout << ans << '\n';
        while (ans--)
        {
            cout << "2 ";
        }
        return maru
    }
    n = n / 2 - 1;
    int x = n + 1;
    cout << x << '\n';
    while (n--)
    {
        cout << "2 ";
    }
    cout << "3" << '\n';

    return maru
}