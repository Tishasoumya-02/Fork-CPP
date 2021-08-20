//Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,10,23,45,67,25};
	int b[]={6,7,8,9,10,24,56,7,89,64,23,56,78};

	int i=0;
	int asize=sizeof(a)/sizeof(a[0]);
	int bsize=sizeof(b)/sizeof(b[0]);
	int csize=asize+bsize;
		int c[csize];
    int j=asize;
	for(i=0;i<csize;i++)
	{
		if(i<asize)
		{
			c[i]=a[i];
		}
		else
		c[i]=b[i-j];
	}
	cout<<"Union"<<endl;
	for(i=0;i<csize;i++)
	cout<<c[i]<<endl;
	int temp[csize]; 

    int k = 0; 
    for (i=0; i<csize-1; i++) 
  
        // If current element is not equal 
        // to next element then store that 
        // current element 
        if (c[i] != c[i+1]) 
            temp[j++] = c[i]; 
  
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously 
    temp[j++] = c[csize-1]; 
  
    // Modify original array 
    for (int i=0; i<j; i++) 
       c[i] = temp[i]; 
  int c1size=sizeof(c)/sizeof(c[0]);
	cout<<"Intessection"<<endl;
	for(i=0;i<c1size;i++)
	cout<<c[i]<<endl;
}
