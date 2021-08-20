#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m[3][3];
	int i,j;
	int c[3];
	int count=0;
	cout<<"Enter"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>m[i][j];
	}
	for(i=0;i<3;i++)

{
	for(j=0;j<3;j++)
	{
		if(m[j][i]==0)
		count++;
	}
	c[i]=count;
}
cout<<*max_element(c, c + 3);
	return 0;
}
