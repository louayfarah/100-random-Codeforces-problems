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

        string s;
        cin >> s;

        int nb = 0;
        for(int i = 0; i<n; i++)
            if(s[i]=='0')
                nb++;

        int A = 0, B = 0;

        //A -> true
        //B -> false
        bool flag = true;

        if(nb%2==1)
        {
            nb--;
            flag = false;
            A++;
        }

        int curr = 0;
        while(nb--)
        {
            if(curr==2)
            {
                curr = 0;
                flag = !flag;
            }

            if(flag)
                A++;
            else
                B++;
        }

        if(A>B)
            cout << "BOB" << endl;
        else if(B>A)
            cout << "ALICE" << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}
