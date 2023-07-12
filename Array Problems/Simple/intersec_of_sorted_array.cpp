//1.Brute force approach.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//       int n,m,k;
//       cin>>n>>m;

//       vector<int> a;
//       for(int i=0;i<n;i++){
//             cin>>k;
//             a.push_back(k);
//       }
//       cout<<endl;

//       vector<int> b;
//       for(int i=0;i<m;i++){
//             cin>>k;
//             b.push_back(k);
//       }

//       vector<int> ans;
//       int vis[m] ={0};

//       for(int i=0;i<n;i++){
//             for(int j=0;i<m;j++){
//                   if(a[i]==b[j] && vis[j]==0){
//                         ans.push_back(a[i]);
//                         vis[j]=1;
//                         break;
//                   }
//                   if(b[j]>a[i]) break;
//             }
//       }
//       for(int i=0;i<m;i++){
//             cout<<ans[i]<<" ";
//       }     


//       return 0;
// }



//2.Optimal approach.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int n,m,k;
//       cin>>n>>m;

//       vector<int> a;
//       for(int i=0;i<n;i++){
//             cin>>k;
//             a.push_back(k);
//       }
//       cout<<endl;

//       vector<int> b;
//       for(int i=0;i<m;i++){
//             cin>>k;
//             b.push_back(k);
//       }

//       int i=0,j=0;
      
//       vector<int> ans;

//       while(i<n && j<m){
//             if(a[i]<b[j]){
//                   i++;
//             }
//             else if(b[j]<a[i]){
//                   j++;
//             }
//             else{
//                   ans.push_back(a[i]);
//                   i++;
//                   j++;
//             }
//       }
//       for(int i=0;i<m;i++){
//             cout<<ans[i]<<" ";
//       }
//       return 0;
// }

