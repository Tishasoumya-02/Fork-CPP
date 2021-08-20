#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,v1,v2; double d,t1,t2;//v2 is the velocity of elevator and v1 of staircase
	//d1 is the distance for staircase d2 for elevator
	//t1 is time for staircase and t2 is time for elevator
	cin>>T;
	while(T--)
	{
		cin>>n>>v1>>v2;
		t1=(sqrt(2)*n)/v1;
		d=(2*n);
		t2=d/v2;
		if(t1<t2)
		cout<<"Staircase"<<endl;
		else
		cout<<"Elevator"<<endl;
		
	}
}
