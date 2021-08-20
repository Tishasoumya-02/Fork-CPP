#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin.ignore();
	getline(cin,s);
	int c=s.capacity();
	cout<<c<<endl;
	s.resize(7);
	cout<<s;
}
