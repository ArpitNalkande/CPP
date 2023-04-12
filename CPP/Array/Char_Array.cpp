#include<iostream>
using namespace std;

int getLength(char name[]){

    int count =0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
    
}


int main(){

    char name[10];
    cout<<"Enter your name:";
    cin>>name;
    cout<<"YOur name is :"<<name<<endl;
    cout<<"The length of character is :"<<getLength(name);
  

    
}