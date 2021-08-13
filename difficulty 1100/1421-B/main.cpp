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

        vector<vector<char>> grid(n, vector<char>(n));
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                cin >> grid[i][j];

        int a = grid[0][1] - '0';
        int b = grid[1][0] - '0';
        int c = grid[n-2][n-1] - '0';
        int d = grid[n-1][n-2] - '0';

        int res = 0;
        vector<pair<int, int>> p;
        if(a==0&&b==0)
        {
            if(c==0&&d==0)
            {
                res = 2;
                p.push_back(make_pair(n-2, n-1));
                p.push_back(make_pair(n-1, n-2));
            }
            else if(c==0&&d==1)
            {
                res = 1;
                p.push_back(make_pair(n-2, n-1));
            }
            else if(c==1&&d==0)
            {
                res = 1;
                p.push_back(make_pair(n-1, n-2));
            }
            else if(c==1&&d==1)
            {
                res = 0;
            }
        }
        else if(a==0&&b==1)
        {
            if(c==0&&d==0)
            {
                res = 1;
                p.push_back(make_pair(0, 1));
            }
            else if(c==0&&d==1)
            {
                res = 2;
                p.push_back(make_pair(0, 1));
                p.push_back(make_pair(n-1, n-2));
            }
            else if(c==1&&d==0)
            {
                res = 2;
                p.push_back(make_pair(0, 1));
                p.push_back(make_pair(n-2, n-1));
            }
            else if(c==1&&d==1)
            {
                res = 1;
                p.push_back(make_pair(1, 0));
            }
        }
        else if(a==1&&b==0)
        {
            if(c==0&&d==0)
            {
                res = 1;
                p.push_back(make_pair(1, 0));
            }
            else if(c==0&&d==1)
            {
                res = 2;
                p.push_back(make_pair(1, 0));
                p.push_back(make_pair(n-1, n-2));
            }
            else if(c==1&&d==0)
            {
                res = 2;
                p.push_back(make_pair(1, 0));
                p.push_back(make_pair(n-2, n-1));
            }
            else if(c==1&&d==1)
            {
                res = 1;
                p.push_back(make_pair(0, 1));
            }
        }
        else if(a==1&&b==1)
        {
            if(c==0&&d==0)
            {
                res = 0;
            }
            else if(c==0&&d==1)
            {
                res = 1;
                p.push_back(make_pair(n-1, n-2));
            }
            else if(c==1&&d==0)
            {
                res = 1;
                p.push_back(make_pair(n-2, n-1));
            }
            else if(c==1&&d==1)
            {
                res = 2;
                p.push_back(make_pair(n-2, n-1));
                p.push_back(make_pair(n-1, n-2));
            }
        }

        cout << res << endl;

        if(res>0)
        {
            for(auto pa: p)
                cout << pa.first+1 << ' ' << pa.second+1 << endl;
        }
    }

    return 0;
}
