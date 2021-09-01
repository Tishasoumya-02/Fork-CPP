//Basic Euclidean Algorithm for GCD 
//The algorithm is based on the below facts. 
//
//If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
//Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
//Below is a recursive function to evaluate gcd using Euclid’s algorithm. 

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int findgcd(int arr[],int n)
{
	int result,i;
	result=arr[0];
	for(i=0;i<n;i++)
{
	result=gcd(arr[i],result);
	if(result==1)
	{
		return 1;
	}
	
}
return result;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
{
	cin>>arr[i];
}
cout<<"gcd "<<findgcd(arr,n);
return 0;
}
