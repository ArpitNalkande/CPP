#include<iostream>
using namespace std;

int firstOccu(int arr[],int size,int key)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccu(int arr[],int size,int key)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,3,5};
    cout<<"The  first occurence of 3 is at index :"<<firstOccu(arr,5,3)<<endl;
    cout<<"The last occurence of 3 is at index :"<<lastOccu(arr,5,3);
}