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


    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    int ones = 0, zeros = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]==1)
            ones++;
        else
            zeros++;
    }

    while(q--)
    {
        int t;
        cin >> t;

        if(t==1)
        {
            int x;
            cin >> x;
            x--;

            if(a[x]==0)
            {
                zeros--;
                ones++;
            }
            else
            {
                zeros++;
                ones--;
            }

            a[x] = 1-a[x];
        }
        if(t==2)
        {
            int k;
            cin >> k;

            if(k<=ones)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
