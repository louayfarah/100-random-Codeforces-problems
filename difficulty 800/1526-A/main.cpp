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

        vector<long long> arr(2*n);
        for(int i = 0; i<2*n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        vector<long long> v1, v2;

        for(int i = 0; i<2*n; i++)
        {
            if(i<n)
            {
                v1.push_back(arr[i]);
            }
            else
            {
                v2.push_back(arr[i]);
            }
        }

        for(int i = 0; i<n; i++)
            cout << v1[i] << ' ' << v2[i] << ' ';
        cout << endl;
    }

    return 0;
}
