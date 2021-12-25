#include<iostream>
using namespace std;
int main()
{
    int N[1000],T,x=0;
    cin>>T;
    for(int i=0;i<1000;i++){
        if(x<T)
            cout<<"N["<<i<<"] = "<<x<<endl;
        else{
            x=0;
            cout<<"N["<<i<<"] = "<<x<<endl;
        }
        x++;
    }
    return 0;
}
