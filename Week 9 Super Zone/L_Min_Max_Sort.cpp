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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = is_sorted(a.begin(), a.end());
        if (ok)
        {
            cout << "0\n";
            continue;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            a[i]--;
            v[a[i]] = i;
        }
        int left = n / 2;
        int right = n - left;
        while ((left > 0) && (v[left - 1] < v[left]) && (v[right] > v[right - 1]))
        {
            left--;
            right++;
        }
        cout << left << '\n';
    }

    return maru
}