#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,x=1;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];

      for(int i=1;i<n;i++){
            if(a[i]<= a[i-1]){
                  x=0;
                  break;
            }
      }
      if(x==1){
            cout<<"true";
      }else{
            cout<<"false";
      }

      return 0;
}