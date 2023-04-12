#include<iostream>
using namespace std;
int main(){


    int arr[10]={5,4,6,10};
    cout<<arr<<endl;
    cout<<"The adress present at starting index is :"<< &arr[0]<<endl;
    cout<<"The value present at starting index is :"<< arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<""<<endl;

}