#include<bits/stdc++.h>

using namespace std;

int main() {
      // int age;
      // cout << "Please enter your age : ";
      // cin >> age;
      // 
      // if(age > 18) cout << "Adult";
      // else cout << "Grow up first";

      // float marks;
      // cout << "Enter your marks here : ";
      // cin >> marks;

      // if(marks <= 25) cout << "F";
      // else if(marks <=44) cout << "E";
      // else if(marks <= 49) cout << "D";
      // else if(marks <= 59) cout << "C";
      // else if(marks <= 79) cout << "B";
      // else if(marks <= 100) cout << "A";

      int age;
      cout << "Enter your age : ";
      cin >> age;
      if(age >=18){
            if(age<=54) cout << "eligible for the job hurrayy!";
            else if(age<=57) cout << "eligible for job, but retirement soon!";
            else cout <<"retirement time!";
      }else cout << "not eligible for job!!";


      return 0;
}