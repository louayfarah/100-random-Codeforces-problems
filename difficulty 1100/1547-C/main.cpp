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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i = 0; i<m; i++)
            cin >> b[i];

        int i = 0, j = 0;

        bool flag = true;
        vector<int> res;
        while(i<n||j<m)
        {
            int cnt = 0;
            if(i==n)
                cnt++;
            if(j==m)
                cnt++;
            if(i<n)
                if(a[i]>k)
                    cnt++;
            if(j<m)
                if(b[j]>k)
                    cnt++;

            if(cnt==2)
            {
                flag = false;
                break;
            }
            while(a[i]<=k&&i<n)
            {
                res.push_back(a[i]);
                if(a[i]==0)
                    k++;
                i++;
            }
            while(b[j]<=k&&j<m)
            {
                res.push_back(b[j]);
                if(b[j]==0)
                    k++;
                j++;
            }
        }

        if(!flag)
            cout << -1 << endl;
        else
        {
            for(int i = 0; i<n+m; i++)
                cout << res[i] << ' ';
            cout << endl;
        }
    }

    return 0;
}
