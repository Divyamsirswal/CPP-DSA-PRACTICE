//1. Brute force approach.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int n,k;
//       cin>>n;

//       vector<int> a;
//       for(int i=0;i<n;i++){
//             cin>>k;
//             a.push_back(k);
//       }
//       cout<<endl;

//       vector<int> b;
//       for(int i=0;i<n;i++){
//             cin>>k;
//             b.push_back(k);
//       }
      
//       int p=a.size();
//       int q=b.size();

//       set<int> s;

//       //inserting a and b in set s

//       for(int i=0;i<p;i++){
//             s.insert(a[i]);
//       }
//       for(int i=0;i<q;i++){
//             s.insert(b[i]);
//       }

//       vector<int> temp;

//       for(auto it: s){
//             temp.push_back(it);
//       }
      
//       for(int i=0;i<temp.size();i++){
//             cout<<temp[i]<<" ";
//       }

//       return 0;

// }


//2. Optimal approach.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
      int n,k;
      cin>>n;

      vector<int> a;
      for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
      }
      cout<<endl;

      vector<int> b;
      for(int i=0;i<n;i++){
            cin>>k;
            b.push_back(k);
      }

      int p=a.size();
      int q=b.size();

      int i=0,j=0;      

      vector<int> unionArr;
      
      while(i<p && j<q){
            if(a[i]<=b[j]){
                  if(unionArr.size()==0 || unionArr.back()!=a[i]){
                        unionArr.push_back(a[i]);
                  }
                  i++;
            }
            else{
                  if(unionArr.size()==0 || unionArr.back()!=b[j]){
                        unionArr.push_back(b[j]);
                  }
                  j++;
            }

      }
      while(i<p){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                        unionArr.push_back(a[i]);
                  }
                  i++;
            }

      while(j<q){
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                        unionArr.push_back(b[j]);
                  }
                  j++;
            }
       for(int i=0;i<n;i++){
            cout<<unionArr[i]<<" ";
      }

 return 0;
     
 }
     


      
