#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	vector<int> :: iterator ptr;
int i;
	int a ,b,c,t;
    int n;
    cout<<"Enter the number of elements"<<endl;
	cin>>n;

	for(i=0;i<n;i++)
	{
	cin>>a;
	v.push_back(a);
		}
		
	cout<<"The elements in the list are"<<endl;
	for( ptr=v.begin();ptr!=v.end();ptr++)
	{
		cout<<*ptr<<" "<<endl;
		}
		cout<<"Enter the positions of group elements first and last to swap"<<endl;
		cin>>b;
		cin>>c;
		if(v.at(b-1)==NULL)
		cout<<"Input again"<<endl;
		if(v.at(c-1)==NULL)
		cout<<"Input again"<<endl;
		if(v.empty()==true)
		cout<<"List is empty"<<endl;
		int d;
		d=c-b;
//		t=v.at(3+d);
		*ptr=v.at(3);
		v.erase(ptr);
	
//		v.at(3+d)=v.at(3);
		
	
		
//		for(i=b;i<=c;i++)
//		{
//			t=v.at(i);
//			v.at(i)=v.at(i+d);
//			v.at(i+d)=t;
//			d=d-2;
//					}
	cout<<"The elements in the list are"<<endl;
	for( i=0;i<n;i++)
	{
		cout<<v[i]<<" "<<endl;
		}		
}

