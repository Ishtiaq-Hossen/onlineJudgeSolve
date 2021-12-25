#include<iostream>
using namespace std;
int main()
{
    int N,X,Y,sum;
    cin>>N;
    for(int i=0;i<N;i++){
        sum=0;
        cin>>X;
        cin>>Y;
        if(X>Y)
        swap(X,Y);
        for(int j=X+1;j<Y;j++){
            if(j%2!=0)
                sum+=j;
        }
        cout<<sum<<endl;
    }

    return 0;
}
