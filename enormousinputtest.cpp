//enormous input test  code intest
// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,s=0,t;
	scanf("%d %d",&n,&k);
	while(n--)
	{
		scanf("%d",&t);
		if(t%k==0)
		s+=1;
		
	}
	printf("%d",s);
}
