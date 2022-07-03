#include<iostream>
using namespace std;

// function prototype
// tpye functiion-name(arguments);
int sum (int a, int b);
void g(void);
int main(){
int num1, num2;
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter second number"<<endl;
cin>>num2;
// num1 and num2 are acctuL Parameters
cout<<"the sum is "<<sum(num1, num2);
// formal parameters are a and b will take the value from 
// actual parameters
g();
return 0;
}
int sum(int a, int b){
int c = a+b;
return c;
}
void g(){
    cout<<"Helo, good morning";
}