#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,rev=0;
    cout<<"enter the number "<<n;
    cin>>n;
    while(temp>0)
    {
        
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;

    }
    cout<<"The reverse of the number is:"<<rev;
    

}