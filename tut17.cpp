#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// this will not swap of a and b  
// void swapPointer(int* a, int* b){
//     int temp = a;
//     a = b;     
//     b = temp;

// call by reference by using pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;     
    *b = temp;
}
int main(){
    int x = 4, y = 5;
// cout<<"the sum of 4 and 5 is  "<<sum(a, b);
cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
// swap(a, b);this will not swap of a and b  
swapPointer(&x, &y);
cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;

return 0;
}