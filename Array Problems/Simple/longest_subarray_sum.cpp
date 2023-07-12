//1.Brute force approach

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       long long n;
//       cin>>n;
//       int k;
      
//       vector<int> a;
//       for(int i=0;i<n;i++){
//             cin>>k;
//             a.push_back(k);
//       }

//       map<long long, int> preSum;
//       long long sum=0;
//       int len=0;

//       for(int i=0;i<a.size();i++){
//             sum+=a[i];
//             if(sum==n){
//                   len=max(len,a[i]);
//             }
//             int rem=sum-n;
//             if(preSum.find(rem)!=preSum.end()){
//                   int length = i-preSum[rem];
//                   len=max(len,length);
//             }
//             if(preSum.find(sum) == preSum.end()){
//                   preSum[sum]=i;
//             }
//       }
//       cout<<len<<endl;
//       return 0;
// }

//2.Optimal approach

#include<bits/stdc++.h>
using namespace std;

int main(){
      
      return 0;
}