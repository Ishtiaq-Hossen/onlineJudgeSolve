#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,d;
    cin>>num;
    for(int i=1;i<=num;i++){
        a=i*i;
        b=i*i*i;
        cout<<i<<" "<<a<<" "<<b<<endl;
        c=a+1;
        d=b+1;
        cout<<i<<" "<<c<<" "<<d<<endl;
    }

    return 0;
}
