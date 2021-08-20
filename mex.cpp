#include<bits/stdc++.h>
using namespace std;
vector <long> v;
void printSubsequence(string input, string output)
{
	int dec_value,base=1,temp;
	// Base Case 
	// if the input is empty print the output string
	if (input.empty()) 
	{
			 dec_value=0;
			 base=1;
			 if(output!=" ")
			 {
		     temp = stoi(output);
          while (temp) 
		  {
            int last_digit = temp % 10;
            temp = temp / 10;
           dec_value += last_digit * base;
           base = base * 2;
         }
		 cout<<dec_value<<endl;
        //   v.push_back(dec_value);
		return;
			 }
		
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

























// for(i=0;i<s.length();i++)
		// {
		// s1=" ";
		// 	for(j=i;j<s.length();j++)
		// 	{
		// 	  s1=s1+s[j];
		// 	  dec_value=0;
		// 	  base=1;
		//     int temp = stoi(s1);
		// 	cout<<s1<<" ";
        //   while (temp) 
		//   {
        //     int last_digit = temp % 10;
        //     temp = temp / 10;
        //    dec_value += last_digit * base;
        //    base = base * 2;
        //  }
        //   cout<<dec_value<<endl;