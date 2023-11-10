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
    if (n & 1)
    {
        n /= 2;
        n--;
        cout << n + 1 << '\n' << "3 ";
    }
    else
    {
        n /= 2;
        cout << n << '\n';
    }

    for (int i = 0; i < n; i++){
        cout << "2 ";
    }
    cout<<'\n';

    return maru
}