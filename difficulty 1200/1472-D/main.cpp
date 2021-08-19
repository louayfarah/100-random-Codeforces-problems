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

        vector<long long> arr;

        for(int i = 0; i<n; i++)
        {
            long long x;
            cin >> x;

            arr.push_back(x);
        }

        sort(arr.begin(), arr.end(), greater<long long>());

        long long res = 0;
        bool flag = true;
        for(int i = 0; i<n; i++)
        {
            if(flag)
            {
                if(arr[i]%2==0)
                    res+=arr[i];
            }
            else
            {
                if(arr[i]%2==1)
                    res-=arr[i];
            }

            flag = !flag;
        }

        if(res>0)
            cout << "Alice" << endl;
        else if(res<0)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }

    return 0;
}
