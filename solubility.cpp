#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x,a,b,s;
	while(t--)
	{
		s=0;
		cin>>x>>a>>b;
		s=a+(100-x)*b;
		cout<<s*10<<endl;
	}
}
