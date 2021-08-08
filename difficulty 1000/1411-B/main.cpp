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
        long long n;
        cin >> n;

        long long res = n;
        while(true)
        {
            bool flag = true;

            long long curr = res;
            while(curr>0)
            {
                int temp = curr%10;
                if(temp==0)
                {
                    curr/=10;
                    continue;
                }
                if(res%temp!=0)
                {
                    flag = false;
                    break;
                }
                curr/=10;
            }

            if(flag)
                break;

            res++;
        }

        cout << res << endl;
    }

    return 0;
}
