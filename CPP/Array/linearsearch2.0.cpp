#include<iostream>
using namespace std;


int  linesear(int abb[],int n ,int key){

    for(int i=0;i<n;i++)
    {
        if(abb[i]==key)
        return i;
    }
    return -1;
}




int main(){

    int abb[5]={5,7,2,9,6},key,n=5;
    cout<<"ENter the key that to be search:";
    cin>>key;
    
    cout<<linesear(abb,n,key);
    
}