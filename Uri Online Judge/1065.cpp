#include<iostream>
using namespace std;
int main()
{
    int i,n,k=0;
    for(i=0;i<5;i++){
        cin>>n;
        if(n%2==0){
            k++;
        }
    }

    cout<<k<<" valores pares"<<endl;

    return 0;
}

