#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    cout<<"Capacity is:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity:"<<v.capacity()<<endl;


    cout<<"The size of v is :"<<v.size();

    

    return 0;
}