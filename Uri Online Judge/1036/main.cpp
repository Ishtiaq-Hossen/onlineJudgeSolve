#include <iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main()
{
    float x,y,z,x1,x2,m;
    cin>>x>>y>>z;
    m=(y*y-(4*x*z));

    if(x!=0 && m>0){
    x1=(-y+sqrt(y*y-(4*x*z)))/(2*x);
    x2=(-y-sqrt(y*y-(4*x*z )))/(2*x);
    cout<<"R1 = "<<showpoint<<fixed<<setprecision(5)<<x1<<endl;
    cout<<"R2 = "<<showpoint<<fixed<<setprecision(5)<<x2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }





    return 0;
}
