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
        queue<int> q;
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = i; j <= n; j *= 2)
            {
                q.push(j);
            }
        }
        while (!q.empty())
        {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << '\n';
    }

    return maru
}