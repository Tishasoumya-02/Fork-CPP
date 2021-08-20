//Find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={5,6,7,8,9,10,11,12,13};
	int asize=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<asize;i++)
    cout<<a[i]<<endl;
    int max=*max_element(a,a+asize);
    int min=*min_element(a,a+asize);
    cout<<"Max Element"<<max<<endl;
    cout<<"Min Element"<<min<<endl;
}
