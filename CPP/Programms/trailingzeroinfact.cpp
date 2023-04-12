#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fact,res=0;
    cout<<"Enter fact";
    cin>>fact;
    while(fact%10==0)
    {
        res++;
        fact=fact/10;
    }   
    cout<<"The number of trailing zero is "<<res;
}