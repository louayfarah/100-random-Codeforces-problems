#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


bool check(long long mid, long long a, long long b, long long c)
{
    if(mid*a<ceil(double(mid)/b)*c)
        return true;
    return false;
}

bool check2(long long mid, long long a, long long b, long long c)
{
    if(mid*a>ceil(double(mid)/b)*c)
        return true;
    return false;
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
        long long a, b, c;
        cin >> a >> b >> c;

        long long r1 = 0, r2 = 0;

        if(c<=a)
            r1 = -1;
        else
        {
            r1 = 1;
        }

        if(c>=a*b)
            r2 = -1;
        else
        {
            r2 = b;
        }

        cout << r1 << ' ' << r2 << endl;
    }

    return 0;
}
