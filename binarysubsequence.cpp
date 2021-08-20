#include<bits/stdc++.h>
using namespace std;

// CPP program for the above approach
// Find all subsequences
void printSubsequence(string input, string output)
{
 int c;
	// Base Case
  
    
	// if the input is empty print the output string
	if (input.empty()) {
		
        // v.push_back(output);
        c=stoi(output);
        cout<<c<<endl;
        return ;
	}

	// output is passed with including
	// the Ist characther of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);


}

// Driver code


int main()
{
    int t,i,j;
	cin>>t;
	while(t--)
	{
		string s;
		cin.ignore();
		getline(cin,s);
		string output = "";
	   string input = s;
       printSubsequence(input, output);
	}
            return 0;
}
