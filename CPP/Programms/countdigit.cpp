#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n>0)

    {
        n=n/10;
        result++;

    }
    cout<<"The number of digits is:"<<result;
    return 0;
}