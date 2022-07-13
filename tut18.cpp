#include<iostream>
using namespace std;

inline int product(int a, int b){
    // Not recommened to use the below line with inline function
    //   static int c=0; this is exctues only once  
    //  c = c + 1; Next the value of same retained
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
return currentmoney * factor;
}

int main(){
int a, b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
// cout<<"the product of a and b is "<<product(a,b);
int money = 100000;
cout<<"if you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived
(money)<< "Rs after 1 year";

return 0;
}