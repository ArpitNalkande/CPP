#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="arpit";
    // cout<<"Length of string is "<< s.length()<<endl;
    // cout<<"The character present at index 3 is "<<s[3];
    // cout<<"The last character is : "<<s[len-1];
    int length=s.size();
    s[length-1]='p';
    cout<<s[length-1];
    return 0;

}