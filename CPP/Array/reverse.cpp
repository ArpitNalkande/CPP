#include<iostream>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// void printArray(int arr[], int n) {
    
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }



int main(){

    int arr[7]={5,4,3,6,3,9,10};
    reverse(arr,7);
    // printArray(arr,7);
    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i]<< "  ";
    }
    cout<<endl;
    
}