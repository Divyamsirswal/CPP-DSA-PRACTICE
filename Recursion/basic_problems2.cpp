//If we doing recursion we can do these questions in two ways.
//1.Parameterise and 2.functional

//Parameterise : 
/*
      f(i,sum){
            if(i==0){
                  cout<<sum;
                  return;
            }
            f(i-1,sum+i);
      }
      main(){
            int n;
            cin>>n;
            f(n,0);
      }
*/


//functional :
/*
      f(n){
            if(n==0) return 0;
            return n+sum(n-1);
      }
      main(){
            int n;
            cin>>n;
            x=sum(n);
            cout<<x;
      }
*/



//sum of first n numbers.

#include<bits/stdc++.h>
using namespace std;

int  sum(int n){
      if(n==0) return 0;
      return n+sum(n-1);
}
int main(){
      int n;
      cin>>n;
      int x=sum(n);
      cout<<"The sum of n number is : "<<x;
      return 0;
}

//    