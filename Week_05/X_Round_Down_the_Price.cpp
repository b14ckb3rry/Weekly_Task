//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int aila_Jadu(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

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
        int c = aila_Jadu(n);
        // while (n != 0)
        // {
        //     c++;
        //     n /= 10;
        // }
        ll x = pow(10, c - 1);
        cout << abs(x - n) << '\n';
    }

    return maru
}