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

        vector<long long> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        long long mini = 0;
        long long curr = 0;

        for(int i = 0; i<n; i++)
        {
            curr+=arr[i];
            mini = min(mini, curr);
        }

        cout << -mini << endl;
    }

    return 0;
}
