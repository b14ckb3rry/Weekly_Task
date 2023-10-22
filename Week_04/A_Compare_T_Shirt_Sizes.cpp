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

    int t; cin>>t;
    while(t--){
        string s1, s2; cin>>s1>>s2;
        char s1_last=s1.back();
        char s2_last=s2.back();
        if(s1_last==s2_last){
            if(s1.size()==s2.size()){
                cout<<"=\n";
            }
            else if(s1_last=='S'){
                if(s1.size()<s2.size()){
                    cout<<">\n";
                }
                else{
                    cout<<"<\n";
                }
            }
            else{
                if(s1.size()<s2.size()){
                    cout<<"<\n";
                }
                else{
                    cout<<">\n";
                }
            }
        }
        else{
            if(s1_last<s2_last){
                cout<<">\n";
            }
            else{
                cout<<"<\n";
            }
        }
    }

    return maru
}