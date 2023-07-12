#include <bits/stdc++.h>
using namespace std;

void print2(int n){
      for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                  cout << " ";
            }
            for(int j=0;j<2*i+1;j++){
                  cout << "*";
            }
            for(int j=0;j<n-i-1;j++){
                  cout << " ";
            }
            cout << "\n";
      }
}

void print1(int n){
      for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                  cout << " ";
            }
            for(int j=0;j<2*n-(2*i+1);j++){
                  cout << "*";
            }
            for(int j=0;j<i;j++){
                  cout << " ";
            }
            cout << "\n";
      }
}

int main(){
      int t;
      cin >> t;
      for(int i=0;i<t;i++){
            int n;
            cin >> n;
            print2(n);
            print1(n);
      }
      return 0;
}