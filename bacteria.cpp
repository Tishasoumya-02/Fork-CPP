#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //write your code here
  
    int n,m,counter=0;
   cin>>n>>m;
    while(m>n)
    {
      if(m%3==0&&m%2==0)
      {
        counter=counter+2;
        m=m/6;
        cout<<m<<endl;
        continue;
      }
      if((m%3)==0)
      {
        counter++;
        m=m/3;
         cout<<m<<endl;
        continue;
      }
      else if((m%2)==0)
      {
        counter++;
        m=m/2;
         cout<<m<<endl;
        continue;
      }
      else
      {
        break;
      }
    }
   if(n!=m)
   {
     cout<<-1<<endl;
   }
   else
   {
     cout<<counter<<endl;
   }
}

