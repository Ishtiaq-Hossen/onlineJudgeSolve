#include<iostream>
using namespace std;
int main()
{
    int x;
    while(1){
        cin>>x;
        if(x==2002){
            cout<<"Acesso Permitido"<<endl;
            break ;
        }
        if(x!=2002)
            cout<<"Senha Invalida"<<endl;

    }
    return 0;
}
