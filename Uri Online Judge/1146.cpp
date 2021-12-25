#include<iostream>
using namespace std;
int main()
{
    int num;
    for(int i=1;num!=0;i++){
        cin>>num;
        for(int j=1;j<=num;j++){
            if(j<num)
                cout<<j<<" ";
            else
                cout<<j<<endl;
        }

    }

    return 0;
}
