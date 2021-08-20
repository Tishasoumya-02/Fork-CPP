#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>c;
		if(c=='b'||c=='B')
		cout<<"BattleShip"<<endl;
		if(c=='c'||c=='C')
		cout<<"Cruiser"<<endl;
		if(c=='d'||c=='D')
		cout<<"Destroyer"<<endl;
		if(c=='f'||c=='F')
		cout<<"Frigate"<<endl;
		
	}
}
