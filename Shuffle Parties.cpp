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
	scanf("%d",t);
	while(t--)
	{
		int n;
	scanf("%d",n);
		int a[n];
		for(i=0;i<n;i++	)
		{
			scanf("%d",a[i]);
		}
		maxs=0;
		 do{
		 	r=func(a,n);
		 	if(r>=maxs)maxs=r;
       
    }while(next_permutation(a, a+n)); //Generate next permutation till it is not lexicographically largest
    
printf("%d\n",maxs);

}

}
