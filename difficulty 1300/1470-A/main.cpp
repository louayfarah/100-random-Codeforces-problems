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

        vector<int> friends(n);
        vector<long long> presents(m);

        for(int i = 0; i<n; i++)
        {
            cin >> friends[i];
            friends[i]--;
        }
        for(int i = 0; i<m; i++)
            cin >> presents[i];

        sort(friends.begin(), friends.end(), greater<int>());

        int i = 0;

        long long res = 0;
        while(i<n&&i<m)
        {
            if(presents[i]>presents[friends[i]])
                break;
            res+=presents[i];
            i++;
        }

        while(i<n)
        {
            res+=presents[friends[i]];
            i++;
        }

        cout << res << endl;
    }

    return 0;
}
