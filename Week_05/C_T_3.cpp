//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

bool check(int dif, vector<int>v, int n, int c) {
    int last = 0, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(abs(v[i] - v[last]) >= dif) {
            cnt++;
            last = i;
        }
    }
    if (cnt >= c) return true;
    else return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l = 0, r = INT_MAX, res;
        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            if (check(mid, v, n, c))
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << res << '\n';
    }

    return maru
}