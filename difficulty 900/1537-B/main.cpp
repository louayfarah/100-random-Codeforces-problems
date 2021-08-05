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
        long long n, m, i, j;
        cin >> n >> m >> i >> j;

        long long dist1 = abs(1-i)+abs(1-j);
        long long dist2 = abs(1-i) + abs(j-m);
        long long dist3 = abs(n-i) + abs(1-j);
        long long dist4 = abs(n-i) + abs(m-j);

        vector<long long> arr(4);
        arr[0] = dist1;
        arr[1] = dist2;
        arr[2] = dist3;
        arr[3] = dist4;

        sort(arr.begin(), arr.end(), greater<long long>());

        long long maxi = arr[0];

        long long x1 = 1, y1 = 1, x2 = 1, y2 = 1;
        if(maxi==dist1)
        {
            x1 = 1, y1 = 1;
            x2 = n, y2 = m;
        }
        else if(maxi == dist2)
        {
            x1 = 1, y1 = m;
            x2 = n, y2 = 1;
        }
        else if(maxi==dist3)
        {
            x1 = n, y1 = 1;
            x2 = 1, y2 = m;
        }
        else if(maxi==dist4)
        {
            x1 = n, y1 = m;
            x2 = 1, y2 = 1;
        }

        cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << endl;
    }

    return 0;
}
