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

        long long c2 = n/3;
        long long c1 = n-2*c2;

        if(abs(c2-c1+3)<abs(c2-c1))
        {
            c2++;
            c1-=2;
        }

        cout << c1 << ' ' << c2 << endl;
    }

    return 0;
}
