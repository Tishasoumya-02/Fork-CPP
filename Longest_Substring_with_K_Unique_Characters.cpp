
#include <bits/stdc++.h>
using namespace std;
int longestKSubstr(string a, int k)
{
    // your code here
    unordered_map<char, int> m;
    int n = a.size();
    int i = 0, j = 0, mx = INT_MIN;
    while (j < n)
    {

        m[a[j]]++;

        if (m.size() < k)
        {
            j++;
        }

        else if (m.size() == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }

        else if (m.size() > k)
        {
            while (m.size() > k)
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
    int k;
    cin >> s;
    cin >> k;
    int l = longestKSubstr(s, k);
    cout << l;
}
