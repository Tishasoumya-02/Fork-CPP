//	Move all the negative elements to one side of the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={-1,-2,-4,-5,-6,-7,5,6,8,10,23,-7,-3-2};
	int asize=sizeof(a)/sizeof(a[0]);
	int i,j=0;
	for(i=0;i<asize;i++)
	{
       if(a[i]<0)
       {
       	if(i!=j)
       	{
       		swap(a[j],a[i]);
		   }
		   j++;
	   }
	   
	}
	sort(a,a+asize);
	for(i=asize-1;i>=0;i--)
{
	cout<<a[i]<<endl;
}
}
