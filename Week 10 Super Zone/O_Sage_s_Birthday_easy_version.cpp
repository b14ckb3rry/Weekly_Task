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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> res(n);
    int x = 0;
    for (int i = 1; i < n; i += 2)
    {
        res[i] = v[x++];
    }
    for (int i = 0; i < n; i += 2)
    {
        res[i] = v[x++];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (res[i] < res[i - 1])
        {
            if (res[i] < res[i + 1])
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    for (auto x : res)
    {
        cout << x << ' ';
    }
    cout << '\n';

    return maru
}