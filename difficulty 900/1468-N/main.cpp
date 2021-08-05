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
        long long c1, c2, c3;
        cin >> c1 >> c2 >> c3;

        long long a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;

        c1-=a1;
        c2-=a2;
        c3-=a3;

        if(c1<0||c2<0||c3<0)
        {
            cout << "NO" << endl;
            continue;
        }

        a4 = max(0LL, a4-c1);
        a5 = max(0LL, a5-c2);

        if(a4+a5<=c3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
