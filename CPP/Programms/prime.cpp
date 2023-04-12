#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for n";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(n==i)
            {
                 cout<<" prime number";
            }
            else
            {
                cout<<"not prime";
                break;
            }    
        }

    }        
    return 0;

}
