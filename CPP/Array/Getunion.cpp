#include <bits/stdc++.h>
using namespace std;

void getUnion(int a[],int n,int b[],int m){

    set<int>s;

    for(int i=0;i<n;i++)
    s.insert(a[i]);

    for(int i=0;i<m;i++)
    s.insert(b[i]);

    cout<<"Number after the union operation:"<<s.size()<<endl;


}


int main(){

    int a[50]={5,4,8,6,1,0,7,65};
    int b[10]={5,4,7,1,0,8,4};
    getUnion(a,50,b,10);
}