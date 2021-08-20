#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin.ignore();
		getline(cin,s);
		int count=0;
		int maxv=0;
		int i;
		for(i=0;i<n;i++)
		{
			if(s[i]=='*')//1st is * 
			{
			count++;
			if(count>=maxv)
			maxv=count;
		}
		
		else//second is not * hence count becomes 0 again;
		count=0;
			}
			if(maxv>=k)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
}
return 0;
}
