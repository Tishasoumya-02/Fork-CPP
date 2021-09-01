#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
//sorting in ascending order
void selectionsortasc(int arr[],int n)
{
	int i,j,min_index;
	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			min_index=j;
		}
		swap(&arr[min_index],&arr[i]);
	}
}
// Sorting in desc order
void selectionsortdesc(int arr[],int n)
{
	int i,j,max_index;
	for(i=0;i<n-1;i++)
	{
		max_index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[max_index])
			max_index=j;
		}
		swap(&arr[max_index],&arr[i]);
	}
}


int main()
{
		int arr[] = {3, 1, 5, 2, 7, 0};
	int n = sizeof(arr)/sizeof(arr[0]);

	// Calling function
selectionsortasc(arr, n);

	//printing sorted array
	for (int i = 0; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;
	// Calling function
selectionsortdesc(arr, n);

	//printing sorted array
	for (int i = 0; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
