//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
#define maru 0;

bool checkEqual(vector<int> &v1, vector<int> &v2, int n)
{
    int dif = mx;
    for (int i = 0; i < n; i++)
    {
        if (v2[i] != 0)
            dif = min(dif, v1[i] - v2[i]);
    }
    if (dif < 0)
        return false;
    if (dif == mx)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] - v2[i] > dif)
            return false;
        if (v2[i] != 0 && v1[i] - v2[i] < dif)
            return false;
    }
    return true;
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
        bool flag = checkEqual(v1, v2, n);
        cout << (flag ? "YES\n" : "NO\n");
    }

    return maru
}