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

        vector<pair<long long, long long>> adj[n+2];
        for(int i = 1; i<=n; i++)
        {
            long long x;
            cin >> x;

            long long j = x+i;
            if(j>n)
                j = n+1;

            adj[j].push_back(make_pair(i, x));
        }

        vector<long long> dist(n+2, 0);
        vector<bool> visited(n+2, false);

        queue<long long> q;

        dist[n+1] = 0;
        q.push(n+1);

        while(!q.empty())
        {
            long long u = q.front();
            q.pop();

            if(visited[u])
                continue;
            visited[u] = true;

            for(auto v: adj[u])
            {
                dist[v.first] = dist[u] + v.second;
                q.push(v.first);
            }
        }

        long long maxi = -1;
        for(int i = 1; i<=n+1; i++)
            maxi = max(maxi, dist[i]);

        cout << maxi << endl;
    }

    return 0;
}
