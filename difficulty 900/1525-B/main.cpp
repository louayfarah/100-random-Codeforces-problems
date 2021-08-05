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

        vector<int> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        vector<int> sorted_arr;
        for(int i = 1; i<=n; i++)
            sorted_arr.push_back(i);

        int nb = 0, res = 0;

        if(arr[0]==n)
            nb++;
        if(arr[n-1]==1)
            nb++;
        if(arr[0]==1)
            nb--;
        if(arr[n-1]==n)
            nb--;

        bool sorted = true;

        for(int i = 0; i<n; i++)
        {
            if(arr[i]!=sorted_arr[i])
            {
                sorted = false;
                break;
            }
        }

        if(sorted)
            res = 0;
        else if(nb<0)
            res = 1;
        else if(nb<2)
            res = 2;
        else if(nb==2)
            res = 3;

        cout << res << endl;
    }

    return 0;
}
