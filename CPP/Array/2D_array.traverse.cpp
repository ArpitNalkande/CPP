#include<iostream>
using namespace std;



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


    
}