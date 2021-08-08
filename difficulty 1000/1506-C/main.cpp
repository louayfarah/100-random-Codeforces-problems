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
        string a, b;
        cin >> a >> b;

        int n, m;
        n = int(a.length());
        m = int(b.length());

        int res = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = i; j<n; j++)
            {
                int len = j-i+1;
                for(int k = 0; k<m-len+1; k++)
                {
                    int cn = i, cm = k;
                    bool flag = true;
                    while(cn<=j)
                    {
                        if(a[cn]!=b[cm])
                        {
                            flag = false;
                            break;
                        }
                        cn++, cm++;
                    }
                    if(flag)
                        res = max(res, len);
                }
            }
        }

        cout << n+m-2*res << endl;
    }

    return 0;
}
