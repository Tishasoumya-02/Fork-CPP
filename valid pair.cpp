#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	if(a[0]==a[1]==a[2])
	{
	cout<<"YES";

}
	else if(a[0]==a[1])
	{
			cout<<"YES";
	
	}
	else if(a[0]==a[2])
	{
			cout<<"YES";
	
	}
	else if(a[1]==a[2])
	{
		cout<<"YES";
		
	}
	else
	{
		cout<<"NO";
	
	}
	
}
