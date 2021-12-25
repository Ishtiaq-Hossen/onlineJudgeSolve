#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        int isprime=0;
        cin>>x;
        for(int k=2;k<x;k++){
            if(x%k==0){
                isprime=1;
            }
        }
        if(isprime==0)
            cout<<x<<" eh primo"<<endl;
        else
            cout<<x<<" nao eh primo"<<endl;
    }

    return 0;
}
