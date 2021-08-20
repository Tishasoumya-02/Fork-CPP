#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,n,d,s=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
         d=floor(log10(n))+1;
         while(d--)
         {
           s=s+(n%10);
           n=n/10;
         }
         cout<<s<<endl;
         s=0;
    }
	
	return 0;
}
