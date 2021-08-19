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

        for(int i = 0; i<n; i++)
        {
            arr[i]-=i+1;
        }

        sort(arr.begin(), arr.end());

        long long mini = arr[0];
        if(arr[0]<0)
            for(int i = 0; i<n; i++)
                arr[i]+=-mini;

        vector<bool> visited(2*n);
        long long res = 0;

        for(int i = 0; i<n; i++)
        {
            long long elt = arr[i];
            if(visited[elt])
                continue;

            long long nb = upper_bound(arr.begin(), arr.end(), elt) - lower_bound(arr.begin(), arr.end(), elt);
            nb = nb*(nb-1)/2;
            res+=nb;
            visited[elt] = true;
        }

        cout << res << endl;
    }

    return 0;
}
