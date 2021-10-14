#inculde<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		c=0;
		else
		c++;
		
	}
	cout<<c<<endl;
	return 0;
}
