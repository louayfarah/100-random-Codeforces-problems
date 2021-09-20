#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;

void dfs(vector<int> adj[], vector<bool> &visited, int u)
{
    if(visited[u])
        return;
    visited[u] = true;

    for(auto v: adj[u])
    {
        dfs(adj, visited, v);
    }
}

long long count_connected_comps(vector<int> adj[], int n)
{
    vector<bool> visited(n+1, false);

    long long res = 0;
    for(int i = 1; i<=n; i++)
    {
        if(visited[i])
            continue;
        res++;
        dfs(adj, visited, i);
    }

    return res;
}

long long log_pow(long long a, long long b)
{
    if(b==0)
        return 1%MOD;

    long long u = log_pow(a, b/2);
    u = ((u%MOD)*(u%MOD))%MOD;

    if(b%2==1)
        u = ((u%MOD)*(a%MOD))%MOD;

    return u%MOD;
}

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

        vector<int> a(n), b(n);
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i = 0; i<n; i++)
            cin >> b[i];

        vector<int> adj[n+1];
        for(int i = 0; i<n; i++)
        {
            adj[a[i]].push_back(b[i]);
            adj[b[i]].push_back(a[i]);
        }

        long long nb_connected_comps = count_connected_comps(adj, n);

        long long res = log_pow(2, nb_connected_comps);
        cout << res << endl;
    }

    return 0;
}
