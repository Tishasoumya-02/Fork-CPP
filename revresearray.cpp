//	Reverse the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={5,6,7,8,9,10,11,12,13};
//	cout<<"Before Reverese"<<endl;
	int asize=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<asize;i++)
    cout<<a[i]<<endl;
	reverse(a,a+asize);
//	cout<<"After Reverese"<<endl;
	for(i=0;i<asize;i++)
    cout<<a[i]<<endl;

}
