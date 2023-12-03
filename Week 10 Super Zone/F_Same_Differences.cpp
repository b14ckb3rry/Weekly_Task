//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

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
        map<int, int> mp;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            int tmp = v[i] - i;
            cnt += mp[tmp];
            mp[tmp]++;
        }
        cout << cnt << '\n';
    }

    return maru
}