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
        long long n, k;
        cin >> n >> k;

        if(k>=n)
        {
            long long res = k/n;
            if(k%n!=0)
                res++;
            cout << res << endl;
        }
        else
        {
            if(n%k==0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}
