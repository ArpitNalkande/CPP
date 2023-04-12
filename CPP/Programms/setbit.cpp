#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    cout<<"Enter n: ";
    cin>>n;
    while(n>0)
    {
        if(n%2==1)  
        res++;
        n=n/2;
    }
    cout<<res;
}