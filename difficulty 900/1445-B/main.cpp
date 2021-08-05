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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(a+b, c+d) << endl;
    }

    return 0;
}
