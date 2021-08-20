//chef and operators
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	int T;
	int a,b;
	cin>>T;
	while(T--)
	{
	cin>>a>>b;
	if(a<b)
	cout<<"<"<<endl;
	if(a>b)
	cout<<">"<<endl;
	if(a==b)
	cout<<"="<<endl;	
}
}
