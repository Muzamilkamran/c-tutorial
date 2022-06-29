#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // constants in c++
//  int a = 3;
//     cout<<"the value of a was: " <<a<<endl;
//  a = 45;
//   cout<< "the value of a is: " <<a<<endl;
// const int a = 3;
//  cout<<"the value of a was: " <<a;
//  a = 45; you will get error because a is costants 
//   cout<<"the value of a is: " <<a;
// mainpulators in c++
// int a = 3, b = 34, c = 1232;
// cout<< "the value of without setw a is: "<<a<<endl;
// cout<< "the value of without setw b is: "<<b<<endl;
// cout<< "the value of without setw c is: "<<c<<endl;

// cout<< "the value of with setw c is: "<<setw(4)<<c<<endl;
// cout<< "the value of with setw c is: "<<setw(4)<<b<<endl;
// cout<< "the value of with setw c is: "<<setw(4)<<a<<endl;
// operator precedence
int a =3, b =35;
int c = ((((a*5)+b)-45)+85);
cout<<c;
    return 0;
}