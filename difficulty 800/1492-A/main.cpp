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
        long long p, a, b, c;
        cin >> p >> a >> b >> c;

        long long r1 = (p/a+1)*a-p;
        long long r2 = (p/b+1)*b-p;
        long long r3 = (p/c+1)*c-p;

        long long res = min(r1, min(r2, r3));
        if(p%a==0||p%b==0||p%c==0)
            res = 0;

        cout << res << endl;
    }

    return 0;
}
