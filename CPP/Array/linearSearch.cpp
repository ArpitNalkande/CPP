#include<iostream>
using namespace std;

int linerSear(int arr[],int n,int key){

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
}



int main(){

    // int arr[5]={5,3,2,7,1,}
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<linerSear(arr,n,key);
   
}