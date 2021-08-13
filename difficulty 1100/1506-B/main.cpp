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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int i = 0;
        int res = 0;
        while(i<n&&s[i]!='*')
        {
            i++;
        }

        if(i==n)
        {
            cout << 0 << endl;
            continue;
        }

        res++;

        int en = i;

        for(int j = i; j<n; j++)
        {
            if(s[j]=='*')
                en = j;
        }

        while(i<en)
        {
            i = min(en, i+k);
            while(s[i]!='*')
                i--;
            res++;
        }

        cout << res << endl;
    }

    return 0;
}
