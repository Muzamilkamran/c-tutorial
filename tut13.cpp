#include<iostream>
using namespace std;

int main(){
    int number, multiplier;
    cout <<"enter the number"<<endl;
    cin>> number;
    for (multiplier = 1; multiplier <= 10; multiplier++)
    { cout<< number << "*" << multiplier << "=" <<(number*multiplier)<<endl;
        /* code */
    }
    // int number, sum;
    // cout <<"enter the number"<<endl;
    // cin>> number;
    // for (sum = 1; sum <= 10; sum++)
    // { cout<< number << "+" << sum <<"=" <<(number+sum)<<endl;
    //     /* code */
    // }
 
    
    return 0;
}