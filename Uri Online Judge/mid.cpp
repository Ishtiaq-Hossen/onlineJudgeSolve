#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    n=10;
    for(i=0;i<5;++i){
        for(j=0;j<n/2;++j){
            cout<<"+"<<" ";
        }
        cout<<"|";
        for(j=n/2;j<n;++j){
            cout<<"-"<<" ";
        }
        cout<<endl;
    }





    return 0;
}

