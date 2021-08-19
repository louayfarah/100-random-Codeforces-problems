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
        int n, m;
        cin >> n >> m;

        vector<long long> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        vector<long long> modulo(n);
        for(int i = 0; i<n; i++)
            modulo[i] = arr[i]%m;

        sort(modulo.begin(), modulo.end());

        long long res = 0;

        for(int i = 0; i<=m/2; i++)
        {
            if(i==0)
            {
                if(modulo[0]==0)
                {
                    res++;
                    continue;
                }
            }

            int nb1 = 0, nb2 = 0;
            if(binary_search(modulo.begin(), modulo.end(), i))
                nb1 = upper_bound(modulo.begin(), modulo.end(), i) - lower_bound(modulo.begin(), modulo.end(), i);
            if(binary_search(modulo.begin(), modulo.end(), m-i))
                nb2 = upper_bound(modulo.begin(), modulo.end(), m-i) - lower_bound(modulo.begin(), modulo.end(), m-i);

            int curr = 0;
            if(nb1==0&&nb2!=0)
                curr = nb2;
            else if(nb1!=0&&nb2==0)
                curr = nb1;
            else if(nb1!=0&&nb2!=0)
            {
                if(abs(nb1-nb2)<=1)
                    curr = 1;
                else
                {
                    curr = abs(nb1-nb2);
                }
            }

            res+=curr;
        }

        cout << res << endl;
    }

    return 0;
}
