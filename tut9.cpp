#include<iostream>
using namespace std;

int main(){
    int age;
cout<<"tell me your age";
cin>>age;
// selection contorl structures if else if else or letter 
// if((age<18) && (age>0)){
// cout<<"you can not go to smoke"<<endl;
// }
// else if(age==18){
//     cout<<"take permisson to your family"<<endl;
// }
// else if(age<1){
//     cout<<"you are not born yet"<<endl;
// }
// else{
// cout<<"you can smoke"<<endl;
// }
// selection control structures switch case 

switch (age)
{
case 18:
cout<<"you are 18"<<endl;
    break;
    case 22:
cout<<"you are 22"<<endl;
    break;
     case 2:
cout<<"you are 2"<<endl;
    break;
    default:
    cout<<"No speical case"<<endl;
    break;
}



    return 0;
}