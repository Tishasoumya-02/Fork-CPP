#include<bits/stdc++.h>

using namespace std;

int main(){

     int t;
     cin >> t;

     while(t-- > 0){
          int n;
          cin>>n;
          int arr[n];

          for(int i =0; i<n; i++)
               cin >> arr[i];

          long long sum = 0;
          sort(arr, arr+n);

          for(int i=0; i<n/2; i++){
          
               sum += (arr[n-i-1]-arr[i]);
          }

          cout << sum <<"\n";
     }
     

     return 0;
}
