// C++ program to demonstrate default behaviour of 
// sort() in STL. 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
int t,n;
cin>>t;
while(t--)
{
int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];
n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n,greater<int>());
cout<<arr[1]<<endl;

}
	return 0; 
}

