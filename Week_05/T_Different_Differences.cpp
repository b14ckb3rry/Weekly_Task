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

    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int t = n, sum = 0, res = 1, count = 1;
        while (t--)
        {
            cout << res << " ";
            sum = res + count;
            if (sum + t - 1 <= k)
                res = sum;
            else
                res++;
            count++;
        }
        cout << "\n";
    }

    return maru
}