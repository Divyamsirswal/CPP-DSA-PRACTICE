#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int k){
      for(int i=0;i<n;i++){
            if(arr[i]==k){
                  return i;
            }
      }
      return -1;
}

int main(){
      int n,k=1;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      int res = linear_search(arr,n,k);
      
      (res == -1)? cout<<"Not found" : cout<<"Found at posi: "<<res;

      
      return 0;
}     