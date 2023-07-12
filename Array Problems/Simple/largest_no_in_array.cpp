#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int a[n];
      
      for(int i=0;i<n;i++) cin>>a[i];
      int large=a[0];
      for(int i=0;i<n;i++) {
            if(a[i]>large) large=a[i];
      }
      cout<<"The largest element in this array is : "<<large;

      return 0;
}