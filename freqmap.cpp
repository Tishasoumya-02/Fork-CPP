#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of elements"<<endl;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}                               
	map <int,int>m;
	for(i=0;i<n;i++)
	{
	 if(m.find(arr[i])==m.end())
        m[arr[i]]=1;
        else
        m[arr[i]]++;    
	}
//	   for (auto &it : m) {
//        cout << it.first << " ";
//             << it.second << "\n";
//    }

int f=2,c=0;
for(auto &it :m)
{
	if(it.second==f)
	c++;
}
cout<<c<<endl;
    return 0;
}
