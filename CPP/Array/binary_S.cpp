#include<iostream>
using namespace std;


int binaryS(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
    
}


int main(){

    int arr[6]={5,4,7,2,9,1};
    // int index=binaryS(arr,6,92);
    // cout<<"Elemet is present at index :"<<index;
     cout<<"The key is present at index :"<<binaryS(arr,6,9);
    return 0;

}