#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double a,b,c,med;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        med=((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);
        cout<<showpoint<<fixed<<setprecision(1)<<med<<endl;
    }
    return 0;
}
