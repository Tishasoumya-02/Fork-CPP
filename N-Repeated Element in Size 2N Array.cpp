//You are given an integer array nums with the following properties:
//
//nums.length == 2 * n.
//nums contains n + 1 unique elements.
//Exactly one element of nums is repeated n times.
//Return the element that is repeated n times.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	vector<int> nums;
	for(i=0;i<n;i++)
	cin>>nums[i];
        int x=n/2;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==x) return it.first;
        }
        return -1;
    }
}
