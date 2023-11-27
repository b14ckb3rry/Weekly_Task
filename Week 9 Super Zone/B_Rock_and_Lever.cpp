//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
const int N = 30;
ll temp;

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll res = 0;
        for (int j = N; j >= 0; j--)
        {
            temp = 0;
            for (int i = 0; i < n; i++)
            {
                int shift1 = 1 << j;
                int shift2 = 1 << j + 1;
                if (arr[i] >= shift1 && shift2 > arr[i])
                {
                    temp++;
                }
            }
            res += temp * (temp - 1) / 2;
        }
        cout << res << '\n';
    }

    return maru
}