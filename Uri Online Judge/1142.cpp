#include<iostream>
using namespace std;
int main()
{
    int num,l=0,n=1,k=4;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=n;j<=k;j++){
            if(j%4==0)
                cout<<"PUM"<<endl;
            else
                cout<<j<<" ";
        }
        n+=4;
        k+=4;

    }
    return 0;


}
