#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    float x, y, z;
    y = 0;
    z = 0;
    while(1)
    {
        cin >> x;
        if(x < 0 || x > 10)
        {
            cout<<"nota invalidan"<<endl;
        }
        else if(z == 0)
        {
            y = x;
            z = 1;
        }
        else
        {
            cout<<"media = "<<showpoint<<fixed<<setprecision(2)<<(y+x)/2;
            break;
        }
    }
    return 0;
}
