#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


bool is_prime(int x)
{
    if(x==1)
        return false;

    for(int i = 2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }

    return true;
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

        vector<vector<int>> grid(n, vector<int>(n, 1));

        if(!is_prime(n))
        {
            int curr = n-1;
            int i = 1;
            while(true)
            {
                if(!is_prime(i)&&is_prime(curr+i))
                    break;
                i++;
            }

            for(int j = 0; j<n; j++)
            {
                grid[j][j] = i;
            }
        }

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                cout << grid[i][j] << ' ';
            cout << endl;
        }
    }

    return 0;
}
