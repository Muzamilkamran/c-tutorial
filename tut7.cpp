#include<iostream>
// There are two types of heder files:
// 1. System header fils: Its come with the compiler files:
// 2. User defined header files: Its written by the programmer
// #include "this.h"
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"operators in c++:"<<endl;
cout<<"Following are the types of operators in c++"<<endl;
// Arithemtic operators
cout<<"The value of a + b "<<a+b<<endl;
cout<<"The value of a - b "<<a-b<<endl;
cout<<"The value of a * b "<<a*b<<endl;
cout<<"The value of a / b "<<a/b<<endl;
cout<<"The value of a % b "<<a%b<<endl;
cout<<"The value of a ++ "<<a++<<endl;
cout<<"The value of a -- "<<a--<<endl;
cout<<"The value of ++a "<<++a<<endl;
cout<<"The value of --a "<<--a<<endl;
cout<<endl;
cout<<endl;
// Assignment operators ---> use to assign to values variables
// int a=3, b=9;
// char d='d'
// Comparison Operators 
cout<<"Follwing are the Comparison operators in c++"<<endl;
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<endl;
cout<<endl;

// Logical Operators 
cout<<"following are the types of Logical operators in c++"<<endl;
cout<<"The value of this logical and operators ((a==b) && (a<b)) logical operators is "<<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operators ((a==b) && (a<b)) logical operators is "<<((a==b) || (a<b))<<endl;
cout<<"The value of this logical not operators (!(a==b)) logical operators is "<<(!(a==b))<<endl;

    return 0;
}