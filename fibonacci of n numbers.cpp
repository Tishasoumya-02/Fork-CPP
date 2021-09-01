//The Fibonacci numbers are the numbers in the following integer sequence.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
//
//In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 
//
//Fn = Fn-1 + Fn-2
//with seed values 
//
//F0 = 0 and F1 = 1.

//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main ()
{
	int n ;
	cin>>n;
	cout << fib(n);
	getchar();
	return 0;
}

// This code is contributed
// by Akanksha Rai

