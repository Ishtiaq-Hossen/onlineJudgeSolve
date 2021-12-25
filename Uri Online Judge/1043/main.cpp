#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a,b,c,att,pt ;
    cin>>a>>b>>c;
    if((a<(b+c))&&(b<(a+c))&&(c<(b+c))){
        pt=a+b+c;
        cout<<"Perimetro = "<<showpoint<<fixed<<setprecision(1)<<pt<<endl;
    }
    else{
        att= ((a+b) * c) / 2;
        cout<<"Area = "<<showpoint<<fixed<<setprecision(1)<<att<<endl;

    }


    return 0;
}
