#include<iostream>
using namespace std;
int main()
{
    int N,X,Y,sum;
    cin>>N;
    for(int i=1;i<=N;i++){
        sum=0;
        cin>>X>>Y;
        for(int j=1; j<=2*Y; j++)
        {

            if(X%2!=0)
            {
                sum+=X;
            }
            X++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
