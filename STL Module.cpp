//STL has four components
//Algorithms
//Containers
//Functions
//Iterators

//Algorithms
//
//The header algorithm defines a collection of functions especially designed to be used on ranges of elements.They act on containers and provide means for various operations for the contents of the containers.
//Algorithm
//Sorting
//Searching
//Important STL Algorithms
//Useful Array algorithms
//Partition Operations
//Numeric
//valarray class

//sort()
//This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort,
// HeapSort and InsertionSort.By default, it uses QuickSort but if QuickSort is doing unfair partitioning 
// and taking more than N*logN time, it switches to HeapSort and when the array size becomes really small, 
// it switches to InsertionSort. 

//Sorting in descending order
//  sort(arr, arr + n, greater<int>());

//custom comparator functions can also be written in sort()
//https://www.geeksforgeeks.org/sort-c-stl/


//Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied.
// The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found,
// or all the elements are exhausted.

//ALL ALGORITHIM FUNCTIONS 
//https://www.geeksforgeeks.org/algorithms-library-c-stl/

//find stl- find(first_iterator, last_iterator, x) – Returns an iterator to the first occurence of x in vector and points 
//to last address of vector ((name_of_vector).end()) if element is not present in vector.


//Some Manipulating Algorithms
//
//1.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
//2.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
//Some Manipulating Algorithms

//arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
//arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.


//all_of()
//
//This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. 
//It checks for a given property on every element and returns true when each element in range satisfies specified property, 
//else returns false.
//
//
//// C++ code to demonstrate working of all_of()
//#include<iostream>
//#include<algorithm> // for all_of()
//using namespace std;
//int main()
//{
//    // Initializing array
//    int ar[6] =  {1, 2, 3, 4, 5, -6};
//  
//    // Checking if all elements are positive
//    all_of(ar, ar+6, [](int x) { return x>0; })?
//          cout << "All are positive elements" :
//          cout << "All are not positive elements";
//  
//    return 0;
//  
//}

//any_of()
//
//This function checks for a given range if there’s even one element satisfying a given property mentioned in function.
// Returns true if at least one element satisfies the property else returns false.
//
//none_of()
//
//This function returns true if none of elements satisfies the given condition else returns false.

//
//copy_n()
//
//copy_n() copies one array elements to new array. This type of copy creates a deep copy of array. 
//This function takes 3 arguments, source array name, size of array and the target array name.
//
//
//iota()
//
//This function is used to assign continuous values to array. This function accepts 3 arguments, 
//the array name, size, and the starting number.

//find the number of digits
//digits=floor(log10(n)+1);

//binary search is O(log n).Divide and conquer algorithim.
