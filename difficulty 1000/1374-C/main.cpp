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
        string s;

        cin >> n >> s;

        int res = 0, curr = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i]=='(')
                curr++;
            else
            {
                curr--;
                if(curr==-1)
                {
                    res++;
                    curr = 0;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}
