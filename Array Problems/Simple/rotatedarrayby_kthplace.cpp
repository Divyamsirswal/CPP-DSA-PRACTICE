#include<bits/stdc++.h>
using namespace std;
//rotating array on left.
int main(){
      int n;
      cin>>n;
      int temp;
      int a[n];
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      
      temp=a[0];
      for(int i=1;i<n;i++){
            a[i-1]=a[i];
      }
      a[n-1]=temp;
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
      return 0;
}


//rotating array on right.
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int temp;
      int a[n];
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      //rotating array on left ;
      temp=a[n-1];
      for(int i=n-1;i>0;i--){
            a[i]=a[i-1];
      }
      a[0]=temp;
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
      return 0;
}