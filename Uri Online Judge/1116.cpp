#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X,N;
    float m,Y ;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>X>>Y;
        m=X/Y;
        if(Y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            cout<<showpoint<<fixed<<setprecision(1)<<m<<endl;
        }
    }

    return 0;
}
