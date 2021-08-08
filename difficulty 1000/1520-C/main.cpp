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

        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        if(n==2)
        {
            cout << -1 << endl;
            continue;
        }

        int x = 1;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout << x << ' ';
                x+=n-1;
                if(x>n*n)
                    x = x-n*n;
            }
            cout << endl;
        }
    }

    return 0;
}
