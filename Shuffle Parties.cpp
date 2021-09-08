#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int func(int a[], int n){
	int sum=0;
	int arr[n];
	sum=0;

    for(int i=0;i<n;i++)
    {
    	arr[i]=(a[i]+i+1) % 2;
    	sum=sum+arr[i];
	}
    return sum;
}
int main()
{
	int t,i,r=0,maxs=0;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int a[n];
		for(i=0;i<n;i++	)
		{
			std::cin>>a[i];
		}
		maxs=0;
		 do{
		 	r=func(a,n);
		 	if(r>=maxs)maxs=r;
       
    }while(next_permutation(a, a+n)); //Generate next permutation till it is not lexicographically largest
    
std::cout<<maxs<<std::endl;

}

}
