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
        long long n;
        cin >> n;

        long long res = 0;

        if(n<=6)
            res = 15;
        else
        {
            long double m = n-6;
            m = ceil(m/2);
            res = 15 + m*5;
        }

        cout << res << endl;
    }

    return 0;
}
