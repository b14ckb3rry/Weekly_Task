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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int t;
    cin >> t;
    int maxi = v[n - 1], mini = v[0];
    while (t--)
    {
        int x;
        cin >> x;
        int ub = upper_bound(v.begin(), v.end(), x) - v.begin();
        int lb = lower_bound(v.begin(), v.end(), x) - v.begin();
        if (x <= mini)
            cout << "X"
                 << " ";
        else
            cout << v[lb - 1] << " ";
        if (x >= maxi)
        {
            cout << "X";
        }
        else
            cout << v[ub];
        cout << "\n";
    }

    return maru
}