//Find the "Kth" max and min element of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={7,8,4,3,5,10,12,65,43};
	int asize=sizeof(a)/sizeof(a[0]);
    int i,k;
    sort(a,a+asize,greater<int>());
    for(i=0;i<asize;i++)
    cout<<a[i]<<endl;
    cout<<"Enter k value"<<endl;
    cin>>k;
    cout<<k<<"th Max Value in array"<<a[k-1]<<endl;
    cout<<k<<"th Min Value in array"<<a[asize-k];
}
