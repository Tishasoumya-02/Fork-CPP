#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
  
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
  
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
  
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
    int parent = (i - 1) / 2;
 
    if (arr[parent] > 0) {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent]) {
            swap(arr[i], arr[parent]);
 
            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }
    }
}
  
// Function to build a Max-Heap from the given array
void buildHeap(int arr[], int n)
{
    // Index of last non-leaf node
    int startIdx = (n / 2) - 1;
  
    // Perform reverse level order traversal
    // from last non-leaf node and heapify
    // each node
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, n, i);
    }
}
  // Function to insert a new node to the Heap
void insertNode(int arr[], int& n, int Key)
{
    // Increase the size of Heap by 1
    n = n + 1;
 
    // Insert the element at end of Heap
    arr[n - 1] = Key;
 
    // Heapify the new node following a
    // Bottom-up approach
    heapify(arr, n, n - 1);
}
// A utility function to print the array
// representation of Heap
void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
  
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
// Function to delete the root from Heap
void deleteRoot(int arr[], int& n)
{
    // Get the last element
    int lastElement = arr[n - 1];
 
    // Replace root with last element
    arr[0] = lastElement;
 
    // Decrease size of heap by 1
    n = n - 1;
 
    // heapify the root node
    heapify(arr, n, 0);
}
bool isHeap(int arr[], int &n)
{

	int i;
	for ( i=0; i<=(n-2)/2; i++)
	{
		// If left child is greater, return false
		if (arr[2*i +1] > arr[i])
				return false;

		// If right child is greater, return false
		if (2*i+2 < n && arr[2*i+2] > arr[i])
				return false;
	}
	return true;
}

int main()
{
	int limit,i,key;
	printf("Enter the number of elements\n");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the values\n");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n;
	while(1)
	{
		printf("1.Enter 1 to insert a new node\n");
	    printf("2.Enter 2 to check if max-heap or not\n");
	    printf("3.Enter 3 to delete a node\n");
	    printf("4.Enter 4 to print the tree\n");
	    printf("5.Enter 5 to exit\n");
	    scanf("%d",&n);
	    switch(n)
	    {
	    	
		
	    case 1:
	    {
	    	printf("Enter the number to insert\n");
	    	scanf("%d",&key);
	         insertNode(arr, limit, key); 
	         break;
			}
			case 2:
				{
						isHeap(arr, limit)? printf("Yes a max-heap\n"): printf("Not a max-heap\n");
					break;
				}
				case 3:
					{
						deleteRoot(arr, limit);
						break;
					}
					case 4:
						{
							 printHeap(arr, limit);
							 break;
						}
						case 5:
							exit(0);
						default:
							printf("Invalid choice\n");
		
		
	}
}


    return 0;
}

