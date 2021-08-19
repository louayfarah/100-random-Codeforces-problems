#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;

vector<int> res;

bool check(string st, int lim)
{
    int f = 0, s = 0;
    int fut_f = 5, fut_s = 5;

    int i = 0;
    while(i<lim)
    {
        if(st[i]=='?')
            break;
        if(st[i]=='1')
        {
            if(i%2==0)
                f++;
            else
                s++;
        }
        if(i%2==0)
            fut_f--;
        else
            fut_s--;
        i++;
    }

    if(f>s+fut_s||s>f+fut_f)
        return true;
    return false;
}
void solve(string st, int curr)
{
    if(curr==10)
    {
        res.push_back(10);
        return;
    }

    if(check(st, curr))
    {
        res.push_back(curr);
        return;
    }

    if(st[curr]=='?')
    {
        st[curr] = '0';
        solve(st, curr+1);
        st[curr] = '1';
        solve(st, curr+1);
        st[curr] = '?';
    }
    else
    {
        solve(st, curr+1);
    }
    return;
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
        string s;
        cin >> s;

        solve(s, 0);
        sort(res.begin(), res.end());

        cout << res[0] << endl;

        res.resize(0);
    }

    return 0;
}
