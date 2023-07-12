//1.print name n time.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//       if(i>n) return;
//       cout<<"Divyam"<<"\n";
//       f(i+1,n);
// }
// int main(){
//       int n;
//       cin >> n;
//       f(1,n);
//       return 0;
// }


//2. print 1 to n linearlly.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//       if(i>n) return;
//       cout<<i<<"\n";
//       f(i+1,n);
// }
// int main(){
//       int n;
//       cin>>n;
//       f(1,n);
//       return 0;
// }

//3. print n to 1.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//       if(i>n) return;
//       cout<<n<<"\n";
//       f(i,n-1);
// }
// int main(){
//       int n;
//       cin>>n;
//       f(1,n);
//       return 0;
// }

//4.Using Backtracking print 1 to n (dont use + use -)

// #include<bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//       if(i<1) return;
//       f(i-1,n);
//       cout<<i<<"\n";
// }
// int main(){
//       int n;
//       cin>>n;
//       f(n,n);
//       return 0;
// }

//5.Using Backtracking do print n to 1.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int n){
//       if(n==0) return;
//       cout<<n<<"\n";
//       f(n-1);
      
// }
// int main(){
//       int n;
//       cin>>n;
//       f(n);
//       return 0;
// }