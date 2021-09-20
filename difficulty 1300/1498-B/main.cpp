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
        long long n, w;
        cin >> n >> w;

        vector<long long> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long res = 0;

        while(!arr.empty())
        {
            long long curr = w;
            bool flag = true;
            while(flag)
            {
                long long y = upper_bound(arr.begin(), arr.end(), curr) - arr.begin() - 1;
                if(y==-1)
                {
                    flag = false;
                    break;
                }

                long long x = arr[y];
                curr-=x;

                arr.erase(arr.begin() + y);
            }
            res++;
        }

        cout << res << endl;
    }

    return 0;
}
