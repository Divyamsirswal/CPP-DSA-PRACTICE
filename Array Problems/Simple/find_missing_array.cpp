#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int N=n-1;
      int k;
      vector<int> a;
      for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
      }
      int xor1=0,xor2=0;

      for(int i=0;i<N;i++){
            xor2=xor2^a[i];
            xor1=xor1^(i+1);
      }
      xor1=xor1^n;
      cout<< (xor1^xor2) <<endl;
      return 0;
}                                                                                 