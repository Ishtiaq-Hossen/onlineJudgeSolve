#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N,ani,sum=0;
    float r=0,c=0,s=0;
    char trash;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>ani>>trash;
        if(trash=='C')
            c+=ani;
        else if(trash=='R')
            r+=ani;
        else if(trash=='S')
            s+=ani;
        sum+=ani;
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    r=(r*100.00)/sum;
    c=(c*100.00)/sum;
    s=(s*100.00)/sum;
    cout<<"Percentual de coelhos: "<<showpoint<<fixed<<setprecision(2)<<c<<" %\n";
    cout<<"Percentual de ratos: "<<showpoint<<fixed<<setprecision(2)<<r<<" %\n";
    cout<<"Percentual de sapos: "<<showpoint<<fixed<<setprecision(2)<<s<<" %"<<endl;


    return 0;
}
