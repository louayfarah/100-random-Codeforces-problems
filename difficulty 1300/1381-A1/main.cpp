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

        string a, b;
        cin >> a >> b;

        vector<int> res;
        for(int i = 0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                for(int j = 0; j<=i; j++)
                {
                    a[i] = char('1' - a[i]);
                }
                reverse(a.begin(), a.begin() + i + 1);
                res.push_back(i+1);

                a[0] = char('1' - a[0]);
                res.push_back(1);

                for(int j = 0; j<=i; j++)
                {
                    a[i] = char('1' - a[i]);
                }
                reverse(a.begin(), a.begin() + i + 1);
                res.push_back(i+1);
            }
        }

        cout << int(res.size()) << ' ';
        for(auto elt : res)
            cout << elt << ' ';
        cout << endl;
    }

    return 0;
}
