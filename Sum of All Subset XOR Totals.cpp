//Shortest technique to find out subset of array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0,sum=0;
	//xor of a number with 0 is the number itself
	cout<<"Enter the number of elements"<<endl;
	//using \n is more efficient than endl because endl flushes the whole buffer ,whereas an advantage of endl is \n uses 1 byte of memory ,endl does not do that
	cin>>n;
	int arr[n];
	int i,j;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	unsigned int pow_set_size=pow(2,n);
	for(i=0;i<pow_set_size;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i & (1 <<j))
			{
				x=x^arr[j];	
			}
		}
		sum+=x;
		x=0;
	
	}
	cout<<"\n"<<sum;
	return 0;
}
