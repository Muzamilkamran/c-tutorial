#include<iostream>

using namespace std;

// what is pointer___> data types which hold the address othere data types

int main(){
 int a=3;
 int* b = &a;

//  &--->(address of)operators
cout<<"the address of a"<<&a<<endl;
cout<<"the address of b"<<b<<endl;

// *-->>(value at) deference operators 
cout<<"the value at address of b"<<*b<<endl;
// pointer to  pointer 
int** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is"<<c<<endl;
cout<<"the value at address  c is"<<*c<<endl;
cout<<"the value at address of c"<<**c<<endl;
    return 0;
}
