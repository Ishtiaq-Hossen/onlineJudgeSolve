#include<iostream>
using namespace std;
int main()
{
    int X,Y,sum=0;
    int isprime;
    cin>>X>>Y;
    for(int i=Y+1;i<X;i++){
        isprime=0;
        if(i%2!=0){
            isprime=1;
        }
        if(isprime==1){
            sum=sum+i;
        }

    }
    cout<<sum<<endl;







    return 0;
}
