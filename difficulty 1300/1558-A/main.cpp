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
        int a, b;
        cin >> a >> b;

        int lim = abs(a-b)/2;
        int counter = lim;

        vector<int> res;
        if((a+b)%2==0)
        {
            while(counter<=a+b-lim)
            {
                res.push_back(counter);
                counter+=2;
            }
        }
        else
        {
            while(counter<=a+b-lim)
            {
                res.push_back(counter);
                counter++;
            }
        }

        cout << int(res.size()) << endl;
        for(int i = 0; i<int(res.size()); i++)
            cout << res[i] << ' ';
        cout << endl;
    }

    return 0;
}
