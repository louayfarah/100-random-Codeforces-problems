#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        while(q--)
        {
            int l, r;
            cin >> l >> r;

            l--, r--;
            bool flag = false;
            for(int i = 0; i<l; i++)
            {
                if(s[i]==s[l])
                {
                    flag = true;
                    break;
                }
            }
            for(int i = r+1; i<n; i++)
            {
                if(s[i]==s[r])
                {
                    flag = true;
                    break;
                }
            }

            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
