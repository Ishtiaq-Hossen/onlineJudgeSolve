#include<iostream>
using namespace std;
int main()
{
    int N,pos,min;
    cin>>N;
    int X[N];
    for(int i=0;i<N;i++)
        cin>>X[i];
    min=X[0];
    for(int i=1;i<N;i++){
        if(min>X[i]){

                min=X[i];
                pos=i;
            }
        }

    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<pos<<endl;
    return 0;
}
