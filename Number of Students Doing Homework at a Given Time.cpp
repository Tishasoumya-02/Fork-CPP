//Given two integer arrays startTime and endTime and given an integer queryTime.
//
//The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].
//
//Return the number of students doing their homework at time queryTime. More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,i;

	int querytime;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
		vector<int> starttime;
	vector<int>endtime;
	cout<<"Enter the start-time"<<endl;
	for(i=0;i<n;i++)
	{
			cin>>starttime[i];
	}
//loop buddy
	cout<<"Enter the end-time"<<endl;
	for(i=0;i<n;i++)
	{
		
cin>>endtime[i];
	}	
	cout<<"Enter the query time\n";
	cin>>querytime;
	while(i<n)
	{
		if(endtime[i]>=querytime)
		c++;
		i++;
	}
	cout<<c<<endl;
	return 0;
}
