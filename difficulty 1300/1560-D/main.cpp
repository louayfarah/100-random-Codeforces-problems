#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;

long long solve(string n, long long x)
{
    string m = "";
    while(x>0)
    {
        m.push_back(char(x%10+'0'));
        x/=10;
    }

    reverse(m.begin(), m.end());

    long long i = 0, j = 0;
    while(i<int(n.length())&&j<int(m.length()))
    {
        if(n[i]==m[j])
        {
            i++, j++;
        }
        else
        {
            i++;
        }
    }

    long long res = int(m.length()) + int(n.length()) -  2*j;
    return res;
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
        string n;
        cin >> n;

        vector<long long> powtwo(60, 0);
        long long curr = 1;
        for(int i = 0; i<60; i++)
        {
            powtwo[i] = curr;
            curr*=2;
        }

        long long res = 1e18;
        for(int i = 0; i<60; i++)
        {
            long long reqmoves = solve(n, powtwo[i]);
            res = min(res, reqmoves);
        }

        cout << res << endl;
    }

    return 0;
}
