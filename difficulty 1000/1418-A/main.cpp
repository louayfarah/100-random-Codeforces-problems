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
        long long x, y, k;
        cin >> x >> y >> k;

        long long needed = y*k+k-1;

        long long res = 0;
        res+=k;
        res+=needed/(x-1);
        if(needed%(x-1)!=0)
            res++;

        cout << res << endl;
    }

    return 0;
}
