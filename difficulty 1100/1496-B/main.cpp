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
        long long k;
        cin >> n >> k;

        vector<long long> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long maxi = arr[n-1], mex = 0;
        for(int i = 0; i<n; i++)
        {
            if(arr[i]==mex)
                mex++;
            else
                break;
        }

        if(k==0)
            cout << n << endl;
        else if(mex>maxi)
            cout << k+n << endl;
        else
        {
            long long searched = ceil(double(mex+maxi)/2);
            bool flag = binary_search(arr.begin(), arr.end(), searched);

            if(flag)
                cout << n << endl;
            else
                cout << n+1 << endl;
        }
    }

    return 0;
}
