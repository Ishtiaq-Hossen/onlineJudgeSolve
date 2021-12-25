#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float a,j,n,k,m;
    m=0;
    n=0;
    while(1){
        cin>>a;
        if(n==1){
            if(a==2)
                break ;
            else if(a==1){
                n=0;
                continue ;
            }
            else{
                cout << "novo calculo (1-sim 2-nao)"<<endl;
                continue;
            }
        }
        else{

        if(a<0||a>10){
            cout<<"nota invalida"<<endl;
        }
        else if(m==0){
            k=a;
            m=1;
        }
        else{
            printf("media = %.2f\n",(a+k)/2);
            m=0;
            n=1;
        }
        }
        if(n==1)
            cout << "novo calculo (1-sim 2-nao)"<<endl;

    }
    return 0;
}

