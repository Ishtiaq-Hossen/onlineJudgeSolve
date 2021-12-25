#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float m,l,k,x;
    cin>>x;

    if(x<=2000){
        cout<<"Isento"<<endl;

    }
    else if (x>2000&&x<=3000){
        m=x-2000;
        m=m*0.08;
        cout<<"R$ "<<showpoint<<fixed<<setprecision(2)<<m<<endl;
    }
    else if(x>3000&&x<=4500){
        m=x-3000;
        l=x-2000-m;
        m=(m*18)/100;

        l=l*0.08;
        cout<<"R$ "<<showpoint<<fixed<<setprecision(2)<<m+l<<endl;

    }
    else if(x>4500){
        m=x-4500;
        l=x-3000-m;
        k=x-2000-l-m;
        m=m*0.28;
        l=(l*18)/100;
        k=k*0.08;
        cout<<"R$ "<<showpoint<<fixed<<setprecision(2)<<k+l+m<<endl;

    }


    return 0;
}
