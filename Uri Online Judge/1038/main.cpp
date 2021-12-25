#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    float m,y;
    cin>>x>>y;
    m=0;
    if(x==1){
        m=4*y;
        cout<<"Total: R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;

    }
    else if(x==2){
        m=4.50*y;
        cout<<"Total: R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;
    }
    else if(x==3){
        m=5*y;
        cout<<"Total: R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;
    }

    else if(x==4){
        m=2*y;
        cout<<"Total: R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;
    }
    else if(x==5){
        m=1.50*y;

        cout<<"Total: R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;
    }

    return 0;
}
