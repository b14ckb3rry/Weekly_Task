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
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        vector<int> res;
        int val = abs(v1[0] - v2[0]);
        res.push_back(val);
        for (int i = 1; i < n; i++)
        {
            if (v1[i] < v2[i - 1])
                val = v2[i - 1];
            else
                val = v1[i];
            res.push_back(abs(val - v2[i]));
        }
        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return maru
}