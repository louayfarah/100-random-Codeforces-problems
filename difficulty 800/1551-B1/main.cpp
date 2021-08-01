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
        string s;
        cin >> s;

        int n = int(s.length());

        int res = 0;
        int sing = 0;

        for(char c = 'a'; c<='z'; c++)
        {
            int occ = 0;
            for(int i = 0; i<n; i++)
            {
                if(s[i]==c)
                    occ++;
            }
            if(occ>=2)
                res++;
            else if(occ==1)
                sing++;
        }

        res+=sing/2;

        cout << res << endl;
    }

    return 0;
}
