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

    int n, q, t = 0;
    while (cin >> n >> q)
    {
        if (n == 0 and q == 0)
            break;
        t++;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << t << ":\n";
        while (q--)
        {
            int x;
            cin >> x;
            int it = lower_bound(v.begin(), v.end(), x) - v.begin();
            it++;
            if (mp[x] == 0){
                cout << x << " not found\n";
            }
            else{
                cout << x << " found at " << it << '\n';
            }
        }
    }

    return maru
}