#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    
    getline(cin,a);
    getline(cin,b);
    cout<<a.length();
	cout<<" "<<b.length()<<endl;
    cout<<a+b<<"\n";
    char ch=a[0];
    char ch1=b[0];
    char temp;
    temp=ch;
    ch=ch1;
    ch1=temp;
    a[0]=ch;
    b[0]=ch1;
    cout<<a<<" "<<b<<"\n";
	// Complete the program
  
    return 0;
}

