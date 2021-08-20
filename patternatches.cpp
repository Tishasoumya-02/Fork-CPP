#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,j,x=0,f;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='x')
		x++;
		else if (s[i+1]=='x')
		{
			i++;
			x++;
		}
		else
		{
			for(j=0;j<x;j++)
			{
				if(s[j]!='y')
				{
					f=0;
					break;
				}
			}
		}
	}
	if(f==0)
	cout<<0;
	else
	cout<<1;
	return 0;
}
