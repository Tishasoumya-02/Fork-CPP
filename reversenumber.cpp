#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int t=x;int d,r=0,f=0,rev=0;
//        if(t<0)
//        {
//        	f=1;
//        	cout<<f<<endl;
//		}
         
        while(t!=0)
        {
            d=t%10;
            r=r*10+d;
            t=t/10;
        }
//        if(f==1)
//         {
//         	rev=-r;
//         	cout<<rev<<endl;
//		 }
        if(r>INT_MAX || r<INT_MIN)
        return 0;
        else
        return r;
        
    }
};
int main()
{
	Solution ob;
	cout<<ob.reverse(-123)<<endl;
}
