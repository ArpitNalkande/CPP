#include <bits/stdc++.h>
using namespace std;

int indexSame(int arr[],int N){

    for(int i=0;i<N;i++){

        if(arr[i]==i){
            return i;
        }
        else{
            return -1;
        }
    }
}

int main(){

    int arr[5]={2,4,3,4};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout<<indexSame(arr,5);
    return 0;


}


