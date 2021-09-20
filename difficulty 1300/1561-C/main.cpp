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
        int n;
        cin >> n;

        vector<vector<long long>> cave(n, vector<long long>(0));

        for(int i = 0; i<n; i++)
        {
            int k;
            cin >> k;

            while(k--)
            {
                long long a;
                cin >> a;
                cave[i].push_back(a);
            }
        }

        vector<long long> maxi(n, 0);
        for(int i = 0; i<n; i++)
        {
            long long counter = 0;
            int k = int(cave[i].size());

            for(int j = 0; j<k; j++)
            {
                maxi[i] = max(maxi[i], cave[i][j]-counter);
                counter++;
            }
        }

        vector<pair<long long, int>> p;
        for(int i = 0; i<n; i++)
        {
            p.push_back(make_pair(maxi[i], int(cave[i].size())));
        }

        sort(p.begin(), p.end());

        vector<long long> pre(n, 0);
        pre[0] = 0;
        for(int i = 1; i<n; i++)
        {
            pre[i] = pre[i-1] + p[i-1].second;
        }

        for(int i = 1; i<n; i++)
        {
            p[i].first-=pre[i];
        }

        long long res = 0;
        for(int i = 0; i<n; i++)
        {
            res = max(res, p[i].first);
        }

        cout << res+1 << endl;
    }

    return 0;
}
