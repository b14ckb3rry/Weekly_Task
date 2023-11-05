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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        bool flag = false;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i + 1] == 0)
            {
                flag = true;
                break;
            }
            while (v[i] >= v[i + 1])
            {
                v[i] /= 2;
                count++;
            }
        }
        if (flag)
        {
            cout << "-1\n";
        }
        else
        {
            cout << count << '\n';
        }
    }

    return maru
}