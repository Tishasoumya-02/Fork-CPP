#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,k;
	cin>>n;
	vector <int>v(n);
	int i;
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>k;
		vector <int>::iterator low = lower_bound(v.begin(), v.end(), k);

       if (v[low - v.begin()] == k)
           cout << "Yes " << (low - v.begin() +1) << endl;
       else
           cout << "No " << (low - v.begin() + 1) << endl;
	}
	
}
