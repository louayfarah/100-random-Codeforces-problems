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

        vector<pair<long long, long long>> arr;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;

            arr.push_back(make_pair(x, i+1));
        }

        sort(arr.begin(), arr.end());
        long long res = 0;

        for(int i = 0; i<n; i++)
        {
            if(arr[i].first>=2*n)
                break;

            for(int j = i+1; j<n; j++)
            {
                if(arr[i].first*arr[j].first>=2*n)
                    break;
                if(arr[i].first*arr[j].first==arr[i].second+arr[j].second)
                    res++;
            }
        }

        cout << res << endl;
    }

    return 0;
}
