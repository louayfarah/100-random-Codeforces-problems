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
        int n;
        cin >> n;

        string s;
        cin >> s;

        string cp_s = s;
        sort(cp_s.begin(), cp_s.end());

        int res = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i]!=cp_s[i])
                res++;
        }

        cout << res << endl;
    }

    return 0;
}
