#include<iostream>
using namespace std;
int main()
{
    int  n,x,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=0;
        cin>>x;
        for(int k=1;k<x;k++){
            if(x%k==0)
                sum+=k;
        }
        if(sum==x)
            cout<<x<<" eh perfeito"<<endl;

        else
            cout<<x<<" nao eh perfeito"<<endl;

    }

    return 0;
}
