#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int array[n];
    cout<<"enter the elements";
    for (int i = 0; i < n; i++)
    {
       cin>>array[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp = array[i];
        array[i] = array[n-(i+1)];
        array[n-(i+1)] = temp;
    }
    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++)
    {
      cout<< array[i] << " ";
    }
    cout << endl;
}