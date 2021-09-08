// C++ Program to implement min heap
// using default priority_queue(max-heap)

#include <iostream>
#include <queue>
using namespace std;
void input(priority_queue<int> &pq,int *arr,int &n)
{
	int i;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for (i = 0; i < n; i++) {
		pq.push((-1) * arr[i]);
	}
}
void maxheap(priority_queue<int> &pq)
{
	// multiply all elements with -1 while
	// retrieve the elements
	cout<<"Max-heap"<<endl;
	while (!pq.empty()) {
		cout << (pq.top()) * (-1) << " ";
		pq.pop();
	}
	
}
int main()
{


	// default priority_queue using max-heap
	priority_queue<int> pq;

	// size of the array
	int n ;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
    
	// multiply -1 with all elements while
	// inserting
		// data
	int arr[n];
     input(pq,arr,n);
     maxheap(pq);

	return 0;
}

