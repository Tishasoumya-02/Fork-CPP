#include<bits/stdc++.h>
using namespace std;
int main()
{
	int hardness,tensile,T,grade;
	float carbon;
	cin>>T;
	while(T--)
	{
		cin>>hardness;
		cin>>carbon;
		cin>>tensile;
		if(hardness>50&&carbon<0.7&&tensile>5600)
		grade=10;
	    else if(hardness>50&&carbon<0.7&&tensile<=5600)
		grade=9;
		else if(hardness<=50&&carbon<0.7&&tensile>5600)
		grade=8;
		else if(hardness>50&&tensile>5600&&carbon>=0.7)
		grade=7;
		else if(hardness>50||tensile>5600||carbon<0.7)
		grade=6;
		else
		grade=5;
		
		cout<<grade<<endl;
	}
}
