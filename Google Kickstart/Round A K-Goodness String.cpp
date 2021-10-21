#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    ll start = 1;
    while (t--)
    {

        ll c = 0;
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll len = s.length();

        //CNT1 BE GSCRE
        for (ll i = 0; i < (n / 2); i++)
        {

            ll rem = len - i - 1;

            if (s[i] != s[rem])
            {
                c++;
            }
        }
        if (c >= k)
        {
            cout << "Case"
                 << " "
                 << "#" << start << ":"
                 << " " << c - k << endl;
        }
        else
        {
            cout << "Case"
                 << " "
                 << "#" << start << ":"
                 << " " << k - c << endl;
        }
        start++;
    }
}
