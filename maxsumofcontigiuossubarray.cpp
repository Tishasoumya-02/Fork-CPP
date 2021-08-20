//find Largest sum contiguous Subarray [V. IMP]
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={-1,-2,7,-4};
	int asize=sizeof(a)/sizeof(a[0]);
    int i,j,sum=0,max=0;
    for(i=0;i<asize;i++)
    {
              
    		sum=sum+a[i];
    		if(sum>=max)
    		{
    			max=sum;
			}
			 if (sum< 0)
                sum= 0;
    	
			
			}
    		cout<<"max"<<max<<endl;
    	}
		
		

