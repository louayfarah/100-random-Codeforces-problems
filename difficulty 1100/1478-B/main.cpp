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
        int q, d;
        cin >> q >> d;

        vector<long long> arr(q);
        for(int i = 0; i<q; i++)
            cin >> arr[i];

        for(int i = 0; i<q; i++)
        {
            bool flag = false;

            while(arr[i]>=d)
            {
                long long curr = arr[i];
                while(curr>0)
                {
                    int temp = curr%10;
                    if(temp==d)
                    {
                        flag = true;
                        break;
                    }
                    curr/=10;
                }
                if(flag)
                    break;
                arr[i]-=d;
            }

            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
