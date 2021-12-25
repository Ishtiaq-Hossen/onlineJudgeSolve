#include<iostream>
using namespace std;
int main()
{
    int k,a=0,d=0,g=0;
    for(int i=1;k!=4;i++){
        cin>>k;
        if(k==1)
            a++;
        else if(k==2)
            g++;
        else if(k==3)
            d++;
        else
            continue;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;

    return 0;
}
