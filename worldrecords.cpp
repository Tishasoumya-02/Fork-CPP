#include<bits/stdc++.h>
using namespace std;
float roundto(float var)
{
    float value=(int)(var*100.00+0.5);
    return (float)value/100.00;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float k1,k2,k3,v;
		cin>>k1>>k2>>k3>>v;
		v=v*k1*k2*k3;
		float d=(float)100.00/(v);
		d=roundto(d);
		d=d*100;
		if(d<958)
		cout<<"yes"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
