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

        vector<long long> b(n);
        for(int i = 0; i<n; i++)
            cin >> b[i];

        sort(b.begin(), b.end());

        bool flag = false;
        for(int i = 1; i<n; i++)
        {
            if(b[i]==b[i-1])
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
