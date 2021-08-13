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


    long long t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        if(n==1)
        {
            cout << arr[0] << endl;
            continue;
        }

        long long removed = 0;
        for(int i = 0; i<n; i++)
        {
            if(i==0)
            {
                if(arr[i]>arr[i+1])
                {
                    removed+=arr[i]-arr[i+1];
                }
            }
            else if(i==n-1)
            {
                if(arr[i]>arr[i-1])
                {
                    removed+=arr[i]-arr[i-1];
                }
            }
            else
            {
                if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
                {
                    removed+=arr[i]-max(arr[i-1], arr[i+1]);
                }
            }
        }

        long long sum = arr[0] + arr[n-1];
        for(int i = 0; i<n-1; i++)
        {
            sum+=abs(arr[i]-arr[i+1]);
        }

        cout << sum - removed << endl;
    }

    return 0;
}
