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


    int n;
    cin >> n;

    if(n%2==1)
        cout << 2*(n/2+1)*(n/2+2) << endl;
    else
        cout << (n/2+1)*(n/2+1) << endl;

    return 0;
}
