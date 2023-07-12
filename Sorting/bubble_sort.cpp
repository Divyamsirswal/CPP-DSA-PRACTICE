/*

 Bubble Sort : swapping the adjacent element pushing the largest element to the last.

 Lets talk about its complexity for the both worst case and best case.

 1.Worst case : O(n^2)
 2.Best  case : O(n) (we have used a check if the array is sorted already we dont have to check the cond.   just break from it and we are safe.)

*/


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n){
      int temp;
      for(int i=n-1;i>=0;i--){
            int didswap=0;
            for(int j=0;j<=i;j++){
                  if(a[j]>a[j+1]){
                        temp=a[j+1];
                        a[j+1]=a[j];
                        a[j]=temp;
                        didswap=1;
                  }
            }
            if(didswap==0){
                  break;
            }
      }

}

int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      bubble_sort(a,n);
      for(int i=0;i<n;i++) cout<<a[i]<<" "; 

      return 0;
}

