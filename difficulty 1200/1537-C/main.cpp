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

        sort(arr.begin(), arr.end());

        long long mini = 1e9;
        for(int i = 0; i<n-1; i++)
            mini = min(mini, abs(arr[i]-arr[i+1]));

        vector<pair<int, int>> ind;
        for(int i = 0; i<n-1; i++)
            if(abs(arr[i]-arr[i+1])==mini)
                ind.push_back(make_pair(i, i+1));

        pair<int, int> p = ind[0];
        int st = p.second, en = p.first;

        if(n==2)
            cout << arr[en] << ' ' << arr[st] << endl;
        else
        {
            for(int i = st; i<n; i++)
                cout << arr[i] << ' ';
            for(int i = 0; i<=en; i++)
                cout << arr[i] << ' ';
            cout << endl;
        }
    }

    return 0;
}
