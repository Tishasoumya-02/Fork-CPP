//Shortest technique to find out subset of array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;int c=0;
	cout<<"Enter the number of elements"<<endl;
	//using \n is more efficient than endl because endl flushes the whole buffer ,whereas an advantage of endl is \n uses 1 byte of memory ,endl does not do that
	cin>>n;
	int arr[n];
	int i,j;
	int a[5]={1,2,3};
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unsigned int pow_set_size=pow(2,n);
	for(i=0;i<pow_set_size;i++)
	{	sum=0;
		for(j=0;j<n;j++)
		{
			if(i & (1 <<j))
			{
				sum+=arr[j];
				cout<<arr[j];	
			}
		}
		cout<<"\t";
		if(sum%2==0)
		c++;
		
	}
	cout<<"\n"<<c-1;
	return 0;
}
