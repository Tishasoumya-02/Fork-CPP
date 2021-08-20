//reverse a single-linkedlist
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	list<int> l;int a;
	list<int>::iterator ptr;//iterator is same as a pointer in c it stores address.
	int i;
	if(l.empty()==true)
	cout<<"list is empty"<<endl;
	cout<<"Enter the number of elements in list"<<endl;
	int n;
	cin>>n;
	cout<"Enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		l.push_back(a);
	}
	ptr=l.begin();
	cout<<"The 1st element pf linked list"<<*ptr<<endl;
	for(i=0;ptr!=l.end();i++)
	{
		cout<<*ptr<<" "<<endl;
		ptr++;
	}
	l.unique();
	ptr=l.begin();
	cout<<"The modified linked list"<<endl;
	for(i=0;ptr!=l.end();i++)
	{
		cout<<*ptr<<" "<<endl;
		ptr++;
	}
	return 0;
}
