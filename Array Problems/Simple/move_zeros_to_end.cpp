//1.Brute force approach

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int n;
//       cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++){
//             cin>>a[i];
//       }
//       vector<int> temp;
//       for(int i=0;i<n;i++){
//             if(a[i]!=0){
//                   temp.push_back(a[i]);
//             }
//       }
//       int newS=temp.size();
//       for(int i=0;i<newS;i++){
//             a[i]=temp[i];
//       }
//       for(int i=newS;i<n;i++){
//             a[i]=0;
//       }
//       for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//       }
//       return 0;
// }


//2.Optimal approach

#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int a[n];

      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      int j=0;
      for(int i=0;i<n;i++){
            if(a[i]==0){
                  j=i;
                  break;
            }
      }
      if(j==0) cout<<"no zeros";

      for(int i=j+1;i<n;i++){
            if(a[i]!=0){
                  swap(a[i],a[j]);
                  j++;
            }
      }
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
      return 0;
}
