#include<iostream>
using namespace std;
int main()
{
    int M,N,sum=0;
    while(1){
        sum=0;
        cin>>M>>N;
        if(M<=0)
            break;
        if(N<=0)
            break;
        if(M>N)
            swap(M,N);
        for(int j=M;j<=N;j++){
            cout<<j<<" ";
            sum+=j;
        }
        cout<<"Sum="<<sum<<endl;
        }

    return 0;
}

