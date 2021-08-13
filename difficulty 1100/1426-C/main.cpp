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

        long long res = 0;
        long long i = 1;

        long long mini = 1e9;
        while(true)
        {
            long long curr = i + ceil(double(n)/i) - 2;
            if(curr<=mini)
                mini = curr;
            else
                break;
            i++;
        }

        res = mini;
        cout << res << endl;
    }

    return 0;
}
