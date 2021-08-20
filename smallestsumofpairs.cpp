#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,size;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		size=sizeof(arr)/sizeof(arr[0]);
	      sort(arr,arr+size);
	      cout<<arr[0]+arr[1]<<"\n";
	}
}
