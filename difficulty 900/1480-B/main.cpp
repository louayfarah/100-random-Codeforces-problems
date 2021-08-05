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
        long long A, B, n;
        cin >> A >> B >> n;

        vector<long long> a(n), b(n);
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i = 0; i<n; i++)
            cin >> b[i];


        for(int i = 0; i<n; i++)
        {
            long long val = ceil(double(b[i])/A)*a[i];
            B-=val;
        }

        long long maxi = -1;
        for(int i = 0; i<n; i++)
        {
            maxi = max(maxi, B+a[i]);
        }

        if(maxi>0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
