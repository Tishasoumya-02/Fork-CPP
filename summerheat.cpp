#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	   cin>>a>>b>>c>>d;
	   int x=floor(c/a);
	   int y=floor(d/b);
	   cout<<x+y<<endl;	
	}
}
