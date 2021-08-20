#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,amin,bmin,cmin,tmin,a,b,c,s=0;
	cin>>t;
	while(t--)
	{
		s=0;
	  cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
	  s=a+b+c;
	  if(a>=amin && b>=bmin && c>=cmin &&s>=tmin)
	  {
	  	cout<<"YES"<<endl;
	  	
	  }
	  else
	  cout<<"NO"<<endl;
	  

}}
