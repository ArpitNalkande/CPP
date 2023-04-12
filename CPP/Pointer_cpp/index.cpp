#include<iostream>
using namespace std;
int main(){

    int a=100;
    cout<<a<<endl;


    cout<<"The address of a is :"<<&a<<endl;

    int *ptr = &a;
    cout<<"The value present at address  :"<<*ptr<<endl;

    cout<<"The address is "<<ptr;

}