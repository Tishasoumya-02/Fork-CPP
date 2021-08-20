#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,e=0,o=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		e=e+1;
		else
		o=o+1;
		
	}
	if(e>o)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
}
