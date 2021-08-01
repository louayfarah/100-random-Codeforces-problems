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

        long long res = 1;
        while(res<=n)
            res*=2;

        res/=2;
        cout << res-1 << endl;
    }

    return 0;
}
