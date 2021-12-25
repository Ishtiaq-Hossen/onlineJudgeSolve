#include <iostream>

using namespace std;

int main()
{
    double x,y,z,temp;
    cin>>x>>y>>z;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    if(y>z){
        temp=y;
        y=z;
        z=temp;
    }
    if(z>x){
        temp=z;
        z=x;
        x=temp;
    }
    if (x >= y + z){
        cout<<"NAO FORMA TRIANGULO"<<endl;

    }
    else if(x*x==y*y+z*z){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if(x*x>y*y+z*z){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if(x*x<y*y+z*z){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if (x == y && y == z){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if(x==y||y==z){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }



    return 0;
}
