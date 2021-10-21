
#include <bits/stdc++.h>
using namespace std;
int longestKSubstr(string a)
{
      unordered_map<char, int> m;
    int n = a.size();
    int i = 0, j = 0, mx = INT_MIN;
        if(n==0)
            return 0;
    while (j < n)
    {

        m[a[j]]++;

       

       if (m.size() == j-i+1)
        {
            mx = max(mx, j - i + 1);
            j++;
        }

        else if (m.size() < j-i+1)
        {
            while (m.size() < j-i+1)
            {
                m[a[i]]--;
                if (m[a[i]] == 0)
                    m.erase(a[i]);
                i++;
            }
            j++;
        }
    }
    return mx;
    }


int main()
{
    string s;

    cin >> s;

    int l = longestKSubstr(s);
    cout << l;
}
