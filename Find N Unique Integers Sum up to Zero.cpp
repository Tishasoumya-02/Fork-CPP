#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>num;
	vector<int>res;
	int n,i,j;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int mid=n/2;
	if(n%2==1)
	res.push_back(0);
	for(i=-mid;i<0;i++)
	res.push_back(i);
	for(i=1;i<=mid;i++)
	res.push_back(i);
	for(i=0;i<n;i++)
	{
		cout<<res[i]<<"\t";
	}
}
