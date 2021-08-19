#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


long long log_pow(long long a, long long b)
{
    if(b==0)
        return 1%MOD;

    long long u = log_pow(a, b/2);
    u = ((u%MOD)*(u%MOD))%MOD;

    if(b%2==1)
        u = ((u%MOD)*(a%MOD))%MOD;

    return u%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        cout << log_pow(n, k) << endl;
    }

    return 0;
}
