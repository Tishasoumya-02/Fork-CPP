
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	int n,d1,r=0;
	while(T--)
	{
	    
	    cin>>n;
	    int d=floor(log10(n))+1;
	    
	    while(d!=0)
	    {
	        d1=n%10;
	        r=(r*10)+d1;
	        n=n/10;
	        d--;
	        
	    }
	    cout<<r<<endl;
	    r=0;
	}
	return 0;
}

