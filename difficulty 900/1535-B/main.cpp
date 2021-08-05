#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


int gcd(int a, int b)
{
    if(b==0)
        return a;

    return gcd(b, a%b);
}


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

        vector<int> v;
        for(int i = 0; i<n; i++)
        {
            if(arr[i]%2==0)
                v.push_back(arr[i]);
        }

        for(int i = 0; i<n; i++)
        {
            if(arr[i]%2==1)
                v.push_back(arr[i]);
        }

        int res = 0;

        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(gcd(v[i], 2*v[j])>1)
                    res++;
            }
        }

        cout << res << endl;
    }

    return 0;
}
