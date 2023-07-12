//Hashing : Simply it means pre storing/fetching.
// Eg --> if we have to check in an array like find this number how many times it appearing in this array.
/*
      a[5]=[1,2,1,3,2];

      1->2
      2->2
      3->1
      4->0
      .
      .
      .
      .
      .
      for n numbers we are using O(n) means n*O(n);
      this is very bad approach to do.

      Hashing can help in this type of situations.

      It is basically defined for integer a[] and string s also(by ASCII method).

      for integers:
      main() - go upto 10^6
      global - go upto 10^7+1
      if we want more space like 10^8/10^9 and more we can use STL of c++:
            1.maps (it has key and value [key=number and value=frequency])
            1.1.maps stores all the values in sorted order.
            2.unordered map.
            2.1.unordered map has no particular order,can change program to program.

      for characters and strings:
      we have all 256 characters in total.

      Time complexity of ----> Map in all cases --> O(logn)
      Time complexity of -----> undordered Map in average and best case ---> O(1)
                         -----> undordered Map in worst case ----> O(n)
*/

//for integer.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//       int n;
//       cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++){
//             cin>>a[i];
//       }

      //precompute.
//       int hash[13]={0};
//       for(int i=0;i<n;i++){
//             hash[a[i]] +=1;

//       }

//       int k;
//       cout<<"\n";
//       cin>>k;
//       while(k--){
//             int num;
//             cin>>num;
            //fetching.
//             cout << hash[num] << "\n";

//       }
//       return 0;
// }


//for string.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       string s;
//       cin>>s;

         //precomputing.
//       int hash[256]={0};
//       for(int i=0;i<s.size();i++){
//             hash[s[i]]++;
//       }
//       int q;
//       cin>>q;
//       while(q--){
//             char ch;
//             cin>>ch;
            //fetching.
//             cout<<hash[ch]<<"\n";
//       }
//       return 0;
// }

//Using map(STL) for integer.

#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin>>n;
      int a[n];
      map<int,int> mp;
      for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
      }

      //iterate in the map.
      for(auto it:mp){
            cout<<it.first<<"->"<<it.second<<"\n";
      }

      int k;
      cin>>k;
      while(k--){
            int num;
            cin>>num;

            //fetching.
            cout<<mp[num]<<"\n";
      }
      return 0;
}