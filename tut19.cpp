#include<iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
// fib(5)
// fib(4) + fib(3)
// fib(2) +  fib(3) + fib(2) + fib(3)
int factroial (int n){
 if (n<=1){
    return 1;
 }
    return n * factroial(n-1);
}
// step by step calaction of factroial(4);
// factroial(4) = 4 * factroial(3);
// factroial(4) = 4 * 3 factroial(2);
// factroial(4) = 4 * 3 * 2 factroial(1);
// factroial(4) = 4 * 3 * 2 * 1;
// factroial(4) = 24;

int main(){
// factorial of a nubers;
// 6! = 6*5*4*3*2*1 = 720
// 0! = 1 by definition
// 1! = 1 by definition
// n! = n * (n-1)!
int a;
cout<<"Enter the number"<<endl;
cin>>a;
// cout<<"The factrioal of "<<a<<" is "<<factroial(a)<<endl;
cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
return 0;
}