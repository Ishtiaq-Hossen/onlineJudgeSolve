#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x,temp,per;
    cin>>x;

    if(x<=400){
    per=15;
    temp=x+(x*(per/100));

    }
    else if(x>400&&x<=800){
    per=12;
    temp=x+(x*(per/100));

    }
    else if (x>800&&x<=1200){
    per=10;
    temp=x+(x*(per/100));


    }
    else if(x>1200&&x<=2000){
    per=7;
    temp=x+(x*(per/100));

    }
    else if(x>2000){
    per=4;
    temp=x+(x*(per/100));



    }
    cout << "Novo salario: " << fixed << setprecision(2) << temp << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (temp - x) << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << per << " %" << endl;


    return 0;
}
