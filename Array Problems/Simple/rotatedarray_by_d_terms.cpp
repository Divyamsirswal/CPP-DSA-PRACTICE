//1st approach done through brute force and it taking extra space in the memory.(we have temp array soo).

// #include<bits/stdc++.h>
// using namespace std;

// void left_rotate(int a[],int n,int d){
//       d=d%n;
//       int temp[d];

//       for(int i = 0; i < d; ++i){
//             temp[i]=a[i];
//       }
//       for(int i = d; i < n; ++i){
//             a[i-d]=a[i];
//       }
//       for(int i=n-d;i<n;i++){
//             a[i]=temp[i-(n-d)];
//       }
// }
// int main(){
//       int n;
//       cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++){
//             cin>>a[i];
//       }
//       int d;
//       cin>>d;
//       left_rotate(a,n,d);
//       for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//       }
      
//       return 0;
// }


//we can use optimal solution for this problem that has no extra space taken it downs to O(1).

#include<bits/stdc++.h>
using namespace std;

void left_rotate(int a[],int n,int d){
      reverse(a,a+d);
      reverse(a+d,a+n);
      reverse(a,a+n);
}
int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
            cin>>a[i];
      }
      int d;
      cin>>d;
      left_rotate(a,n,d);
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
      return 0;
}