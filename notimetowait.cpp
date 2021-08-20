#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x;
	cin>>n;//number of different time zones
	cin>>h;//hours needed by chef to solve the problem
	cin>>x;//number of hours left for competition to complete
	int a[n];
	int i,f=0,sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+x;
		if(sum>=h)
		{
		f=1;
	}
		
		else
           f=0;
}
if(f==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
