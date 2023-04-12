#include<iostream>
#include<array>
using namespace std;
int main(){

    int arr[5]={5,6,4,1,8};
    array<int 4 > a={1,2,3,4};     

    int size=a.size();
    cout<<"The size of array is :"<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd position:"<<a.at(0)<<endl;

    cout<<"Empty or not "<<a.empty()<<endl;

    cout<<"First Element:"<<a.front()<<endl;
    cout<<"Last Element:"<<a.back()<<endl;


    return 0;
}