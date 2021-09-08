#include<iostream>
#include<math.h>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		std::cin>>a>>b>>c>>d>>e;
		if(a+b<=d && c<=e)
		std::cout<<"YES"<<std::endl;
		else if(a+c<=d && b<=e)
		std::cout<<"YES"<<std::endl;
		else if (b+c<=d && a<=e)
		std::cout<<"YES"<<std::endl;
		else
		std::cout<<"NO"<<std::endl;
		std::cout<<floor(log10(12673))+1<<std::endl;
	}
}
