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
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for(int i = 0; i<n; i++)
            cin >> grid[i];

        vector<string> ngrid(n-1);
        for(int i = 0; i<n-1; i++)
            cin >> ngrid[i];

        vector<string> li(m);
        for(int j = 0; j<m; j++)
        {
            for(int i = 0; i<n; i++)
            {
                li[j].push_back(grid[i][j]);
            }
            sort(li[j].begin(), li[j].end());
        }

        vector<string> nli(m);
        for(int j = 0; j<m; j++)
        {
            for(int i = 0; i<n-1; i++)
            {
                nli[j].push_back(ngrid[i][j]);
            }
            sort(nli[j].begin(), nli[j].end());
        }

        string res = "";

        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                char c = li[i][j];

                int nb = upper_bound(li[i].begin(), li[i].end(), c) - lower_bound(li[i].begin(), li[i].end(), c);
                int nnb = upper_bound(nli[i].begin(), nli[i].end(), c) - lower_bound(nli[i].begin(), nli[i].end(), c);

                if(nb!=nnb)
                {
                    res.push_back(c);
                    break;
                }
            }
        }

        cout << res << endl << flush;
    }

    return 0;
}
