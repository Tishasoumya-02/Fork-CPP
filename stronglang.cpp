#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,c,c1,a=1;
	cin>>t;
	string s;
	long long int  n, k,l;
	while(t--)
	{a=1;
	cin>>n;
	cin>>k;
	cin.ignore();
	getline(cin,s);
	l=s.length();
	c=1;
	if(n==l)
	{
	
	for(i=0;i<l-1;i++)
	{
		//cout<<s[i]<<" "<<s[i+1]<<endl;
		if((s[i]=='*'&&s[i+1]=='*'))
		{
			if(a)
			{
				c1=c+1;
				//cout<<c1<<endl;
			}
			else
			{
			c1++;
			//cout<<c1<<endl;
	}
	a=0;
		}
		else if(s[0]=='*'||s[l-1]=='*')
		c1=1;
		else
		continue;
	}
	if(c1==k)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
}
}
