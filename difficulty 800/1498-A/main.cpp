#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


long long sumOfDigits(long long x)
{
    long long res = 0;

    while(x>0)
    {
        res+=x%10;
        x/=10;
    }

    return res;
}

long long gcd(long long a, long long b)
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
        long long n;
        cin >> n;

        long long res = n;
        bool flag = false;

        while(!flag)
        {
            long long curr = gcd(res, sumOfDigits(res));
            if(curr>1)
                flag = true;
            res++;
        }

        res--;
        cout << res << endl;
    }

    return 0;
}
