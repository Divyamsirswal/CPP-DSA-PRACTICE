#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int k;
      vector<int> a;
      for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
      }
      int x=0;

      for(int i=0;i<a.size();i++){
            x=x^a[i];
      }
      cout<<x<<endl;
      return 0;
}