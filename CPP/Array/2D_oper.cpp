#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int row ,int col){

    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}



int main(){

    int arr[2][3];
    cout<<"Enter the elements"<<endl;
    for(int row =0;row<2;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    for(int row =0;row<2;row++){
        for(int col=0;col<3;col++){
           cout<<arr[row][col] <<"  ";
        }
        cout<<endl;
         
    }
    
    int target;
    cout<<"enter the element that to be searched:"<<endl;
    cin>>target;
    if(isPresent(arr, target,2,3)){
        cout<<"element is present"<<endl;

    }
    else{

        cout<<"not found";

    }
    return 0;



    
}