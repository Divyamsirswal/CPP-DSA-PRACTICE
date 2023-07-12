//Recursion : When the function is calling to itself until some condition is met.
// It is really important to put base condition for the recursion.

// #include<bits/stdc++.h>
// using namespace std;
// int x=0;
// void print(){
//       if(x==4) return;
//       cout << x << '\n';
//       x++;
//       print();
// }
// int main(){
//       print();
//       return 0;
// }

//If we try to do infinite recursion the output will be segmentation fault and generally we called this stack overflow.
/*
      This is called stack overflow.

      void f1(){
            cout<<"1";
            f1();
      }     
      main(){
            f1();
      }

*/


//Recursion Tree : Its a simple way to define the all functions call which we have done in our recursion.
//Easy way to examine the steps of recursion.



//We can also Use Multiple recursion method.
/*
      f(){
            f();
            f();
            .
            .
            .
            .
      }
      main(){
            f();
      }
*/


//Best example of multiple recursion is fibonacci problem.

#include<bits/stdc++.h>
using namespace std;

int f(int n){
      int l,sl;
      if(n<=1) return n;
      l=f(n-1);
      sl=f(n-2);
      return l+sl;
}
int main(){
      int n,x;
      cin>>n;
      x=f(n);
      cout<<x;
      return 0;
}