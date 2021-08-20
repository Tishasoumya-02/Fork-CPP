#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int a,b,sum=0,c=1,d;
	cin>>t;
	while(t--){
	    
	    cin>>a>>b;
	    c=1;
	 while(c){   
	    sum=a+b+c;
	    for(int i=2;i<sum;i++){
	        if(sum%i==0){
	            d++;
	        }
	    }
	    if(d==0){
	        cout<<c<<"\n";
	        break;
	    }else{
	        c++;
	        d=0;
	    }
	}
	}
	return 0;
}

