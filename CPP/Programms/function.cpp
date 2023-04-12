#include<bits/stdc++.h>
using namespace std;

// Types of function 
// void function
// return function
// parametrised function
// non prametrised function


// void function
// void myName(){
//     cout<<"Name is Arpit"<<endl;
// }

// int main()
// {
//     myName();
//     return 0;
// }

// RETURN FUCNTION 
// ADDION OF TWO NUMBERS

int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;

}

int main()
{
    int num1,num2;
    cin>> num1>> num2;
    int result=sum(num1,num2); // 5+6=11 is stored here
    cout<<result<<endl;
    return 0;
}
