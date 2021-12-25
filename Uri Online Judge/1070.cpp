#include<iostream>
using namespace std;
int main()
{
    int m=0,X;
    cin>>X;
    for(int i=0;m<6;i++){
        if(X%2!=0){
            cout<<X<<endl;
            m++;
        }
        X++;

    }
    return 0;
}
