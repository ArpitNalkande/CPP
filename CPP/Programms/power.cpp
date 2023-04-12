#include<iostream>
using namespace std;
int main()
{
    int res=1,x,n;
    cout<<"Enter the x,n:- ";
    cin>>x>>n;
    for(int i=0;i<n;i++)
    {
        res=res*x;
    }
    cout<<"the  power is "<<res;
}