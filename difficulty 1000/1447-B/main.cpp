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

        vector<vector<int>> grid(n, vector<int>(m));
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                cin >> grid[i][j];

        int nb_neg = 0;
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                if(grid[i][j]<0)
                    nb_neg++;

        int mini = 101, sum = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                mini = min(mini, abs(grid[i][j]));
                sum+=abs(grid[i][j]);
            }
        }

        if(nb_neg%2==0)
            cout << sum << endl;
        else
            cout << sum-2*mini << endl;
    }

    return 0;
}
