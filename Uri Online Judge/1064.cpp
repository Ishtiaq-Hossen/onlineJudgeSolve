#include<iostream>

using namespace std;
int main()
{
    float avg,n,m=0;
    int i,j=0;

    for(i=0;i<6;i++){
        cin>>n;
        if(n>0){
            m=m+n;
            j++;
        }
    }
    avg=m/j;
    cout<<j<<" valores positivos"<<endl;
    cout<<avg<<endl;

return 0;
}
