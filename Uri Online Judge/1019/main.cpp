#include <iostream>

using namespace std;

int main()
{
    int x,m,h,s;
    cin>>x;
    m=x/60;
    h=m/60;
    m=m%60;

    s=x%60;

    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
