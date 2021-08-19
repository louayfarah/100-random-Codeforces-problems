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

        vector<long long> arr(n+2);

        for(int i = 0; i<n+2; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long sum = 0;
        for(int i = 0; i<n; i++)
            sum+=arr[i];

        if(sum==arr[n])
        {
            for(int i = 0; i<n; i++)
                cout << arr[i] << ' ';
            cout << endl;
            continue;
        }

        sum+=arr[n];
        vector<long long> res;
        for(int i = 0; i<=n; i++)
        {
            if(sum-arr[i]==arr[n+1])
            {
                for(int j = 0; j<=n; j++)
                {
                    if(j==i)
                        continue;
                    res.push_back(arr[j]);
                }
                break;
            }
        }

        if(int(res.size())==0)
            cout << -1 << endl;
        else
        {
            for(int i = 0; i<n; i++)
                cout << res[i] << ' ';
            cout << endl;
        }
    }

    return 0;
}
