#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A,B,C,rec,tra,cir,sqr,pi,rt;
    pi=3.14159;
    cin>>A>>B>>C;
    rec=A*B;
    rt=(0.5*A*(C));
    sqr=B*B;
    tra=(((A+B)/2)*C);
    cir=(pi*(C*C));
    cout<<"TRIANGULO: "<<showpoint<<fixed<<setprecision(3)<<rt<<endl;
    cout<<"CIRCULO: "<<showpoint<<fixed<<setprecision(3)<<cir<<endl;
    cout<<"TRAPEZIO: "<<showpoint<<fixed<<setprecision(3)<<tra<<endl;
    cout<<"QUADRADO: "<<showpoint<<fixed<<setprecision(3)<<sqr<<endl;
    cout<<"RETANGULO: "<<showpoint<<fixed<<setprecision(3)<<rec<<endl;







    return 0;
}
