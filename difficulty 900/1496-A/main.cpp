#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

const long long MOD = 1e9+7;
const long long INF = 1e18;


bool is_palindrome(string s)
{
    int len = (int)s.length();

    bool flag = true;
    for(int i = 0; i<len/2; i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag = false;
            break;
        }
    }

    return flag;
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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;


        if(k==0)
            cout << "YES" << endl;
        else if(2*k==n)
            cout << "NO" << endl;
        else
        {
            string ss = "";
            for(int i = 0; i<k; i++)
                ss.push_back(s[i]);

            for(int i = n-k; i<n; i++)
                ss.push_back(s[i]);

            if(is_palindrome(ss))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
