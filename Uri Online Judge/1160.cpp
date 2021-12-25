#include<iostream>
using namespace std;
int main()
{
    int n, c, i;
    int A,B;
    double AC,BC;
    cin>>n;
    for(i=1; i<=n; i++){
        c=0;
        cin>>A>>B>>AC>>BC;
        for(int k=0;A<=B;k++){
            A*=(AC/100.0)+1.0;
            B*=(BC/100.0)+1.0;
            c++;
            if (c > 100)
            {
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if(c<=100)
            cout<<c<<" anos."<<endl;
    }



    return 0;
}
