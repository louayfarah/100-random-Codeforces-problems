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
        int a, b, c;
        cin >> a >> b >> c;

        long long sum = a + b + c;

        if(sum%9!=0)
            cout << "NO" << endl;
        else
        {
            long long lim = sum/9;
            if(lim>a||lim>b||lim>c)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
