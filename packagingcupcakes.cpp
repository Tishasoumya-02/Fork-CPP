#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int tmenu = 2048,min = 0;
        while(num>0)
        {
            min+=num/tmenu;//dividing a small number by larger number the remainder is 0;
            num%=tmenu;  
            tmenu=tmenu>>1;//right shift is dividing
        }
        cout<<min<<endl;
    }
    return 0;
}
