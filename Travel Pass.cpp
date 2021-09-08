#include<iostream>
#include<math.h>
#include<string.h>
#include<typeinfo>
using namespace std;
int main()
{
	int t,i,d,s=0;
	std::cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string str;
         cin>>str;
         for(i=0;i<str.length();i++)
         {
         	char ch=str.at(i);
           d=ch-'0';
           if(d==1)
           s=s+b;
           else
           s=s+a;
		 }
		 cout<<s<<endl;
		 s=0;
}
}
