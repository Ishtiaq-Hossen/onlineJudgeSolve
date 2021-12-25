#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=3;j++){
            if(j<3)
            cout<<pow(i,j)<<" ";
            else
            cout<<pow(i,j)<<endl;
        }

    }

    return 0;
}
