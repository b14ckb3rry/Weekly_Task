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
        if (n >= 1 and n <= 10)
        {
            cout << "Lower Double\n";
        }
        else if (n >= 11 and n <= 15)
        {
            cout << "Lower Single\n";
        }
        else if (n >= 16 and n <= 25)
        {
            cout << "Upper Double\n";
        }
        else if (n >= 26 and n <= 30)
        {
            cout << "Upper Single\n";
        }
    }

    return maru
}